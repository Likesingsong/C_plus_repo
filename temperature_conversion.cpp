/*
  一个C++程序实例：
  将摄氏温度换算成华氏温度
*/
#include <iostream>

using namespace std;

int main()
{
    // 申请内存空间
    double ctemp;
    double ftemp;
    // 输入摄氏温度
    cin >> ctemp;

    ftemp = ctemp * 1.8 + 32; // 换算温度
    cout << ftemp; // 输出华氏温度
    return 0;
}