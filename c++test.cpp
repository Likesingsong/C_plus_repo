/**
 *姓 名：Likesingsong
 *题 目：
 *描 述：
 *日 期：2022-5-24
 */
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

class String {
public:
    //无参构造函数
    String();
    //有参构造函数
    String(const char *s);
    //析构函数
    ~String();
    //复制构造函数
    String(const String &s);
    //赋值运算符=重载，分为对象——>对象赋值 和const char*——>对象赋值
    String &operator=(const String &s);
    String &operator=(const char *s);
    //运算符+=重载
    String &operator+=(const String &s);
    //运算符 + 重载，实现String对象连接
    String operator+(const String &s) const;
    //提取运算符<<重载
    friend ostream & operator<<(ostream &out,const String &s);
    //提取运算符>>重载
    friend istream & operator>>(istream &in, String &s);
    //下标运算[]重载
    char&operator[](int i);
    //判断两个String对象是否相等
    bool operator==(const String &s);
    //判断String对象1 < 对象2 ？
    bool operator<(const String &s); 
    //求字符串的长度
    int Length(); 
    
private:
    //成员是字符指针
    char *str;
};


int main() {
    //测试
    String s1("Help!"),s2("Good!"),s3(s2),s4,s5;
    cout<<"s1="<<s1<<endl;
    cout<<"s3="<<s3<<endl;
    s3 = "Hello";
    s3 = s2;
    cout<<"s3="<<s3<<endl;
    s3 += s2;
    cout<<"s3="<<s3<<endl;
    cout<<"输入s4:";
    cin>>s4;
    cout<<"s4="<<s4<<endl;
    s5 = s3 + s4;
    cout<<"s5="<<s5<<endl;
    cout<<"strlen(s5)="<<s5.Length()<<endl;
    cout<<"s5[0]="<<s5[0]<<endl;
    s5[0] = 'g';
    cout<<"s5="<<s5<<endl;
    cout<<"s3 == s5 ?";
    cout<<boolalpha<<(s3 == s5)<<endl;
    cout<<"s3 < s5 ?";
    cout<<boolalpha<<(s3 < s5)<<endl;
    return 0;
}

//无参构造函数
String::String(){
    /**
     * 由于new与delete对应，
     * 所以在析构函数中的delete也应该析构调用无参构造的对象，
     * 因此无参构造函数中也应该用new开辟一块内存
     * */
    str = new char[1];
}

//有参构造函数
String::String(const char *s) {
    //new开辟一块与 s 相同的空间，+1是因为字符串以'\0'结束，下同
    str = new char [strlen(s)+1];
    strcpy(str,s);
}

//析构函数
String::~String() {
    //delete 构造函数中new的空间
    delete []str;
}

//复制构造函数
String::String(const String &s) {
    str = new char[strlen(s.str)+1];
    strcpy(str,s.str);
}

//赋值运算符=重载
String&String::operator=(const String &s) {
    if(this != &s) {    //检查是否自赋值，如果相同无需赋值
        delete []str;   //delete原来的空间
        str = new char[strlen(s.str)+1];//重新开辟内存
        strcpy(str,s.str);//复制内容
    }
    return *this;
}

String&String::operator=(const char *s){
    if(strcmp(str,s)!=0) {//检查是否自赋值，如果相同无需赋值
        delete []str;
        str = new char[strlen(s)+1];
        strcpy(str,s);
    }
    return *this;
}

//运算符+=重载
String&String::operator+=(const String &s) {
    char *s_temp = new char[strlen(str)+1];        //引用中间字符指针
    strcpy(s_temp,str);                            //临时存储本类的内容
    delete []str;                                  //delete 对象的内容
    str = new char[strlen(s_temp)+strlen(s.str)+1];//开辟一块 放的下两个对象的内存
    strcpy(str,s_temp);                            //先复制
    strcat(str,s.str);                             //后连接
    delete []s_temp;                               //delete 临时字符指针
    return *this;
//    str = strcat(str,s.str);                     //没有为原来的str开辟两个字符串的空间
}

//运算符+重载
String String::operator+(const String &s) const {
    char *s_temp = new char[strlen(str)+strlen(s.str)+1];
    strcpy(s_temp,str);
    strcat(s_temp,s.str);
    String s1(s_temp);
    delete []s_temp;
    return s1;
}

//下标运算符[]重载
char&String::operator[](int i) {
    return str[i];
}
//运算符==重载
bool String::operator==(const String &s) {
    if(strcmp(str,s.str)==0)
        return true;
    return false;
}

//运算符<重载
bool String::operator<(const String &s) {
    if(strcmp(str,s.str)==-1)
        return true;
    return false;
}

//求字符串长度
int String::Length() {
    return strlen(str);
}

//运算符>>重载
istream & operator>>(istream &in, String &s) {
    //通过isream对象传值
    in>>s.str;
    return in;
}

//运算符<<重载
ostream & operator<<(ostream &out,const String &s) {
    //将值传到osream对象中
    out<<s.str;
    return out;
}


