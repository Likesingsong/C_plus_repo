#include <iostream>
using namespace std;

int main() {
    int a = 10;           // 定义一个整型变量a
    int* p = &a;          // 定义一个指向int的指针p，并让它指向a的地址

    cout << "a的值: " << a << endl;
    cout << "a的地址: " << &a << endl;
    cout << "p的值(即a的地址): " << p << endl;
    cout << "p的地址值: " << &p << endl;
    cout << "*p的值(即a的值): " << *p << endl;

    *p = 20;              // 通过指针修改a的值
    cout << "通过指针修改后a的值: " << a << endl;

    int b = 30;
    p = &b;               // 让指针p指向b
    cout << "b的地址: " << &b << endl;
    cout << "p现在指向b, *p的值: " << *p << endl;
    cout << "p的地址值: " << &p << endl;
    // 二级指针
    int** pp = &p;
    cout << "pp的值(即p的地址): " << pp << endl;
    cout << "*pp的值(即p的值): " << *pp << endl;
    cout << "**pp的值(即a的值): " << **pp << endl;

    return 0;
}
