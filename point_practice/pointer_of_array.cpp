#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    /* 指向固定大小数组的指针 */
    int a[5] = {1, 2, 3, 4, 5};
    int(*p)[5] = &a;
    (*p)[0] = 10;
    cout << a[0] << endl;

    /* 指向动态数组的指针 */
    int *dynamicArr = new int[5]; // dynamicArr指向数组的首个元素
    dynamicArr[0] = 10;           // 可以通过下标直接访问数组元素
    cout << dynamicArr[0] << endl;
    delete[] dynamicArr; // 使用完后要释放内存

    /* 使用 typedef 或 using 简化类型 */
    typedef int ArrType[5];  // 定义ArrType为包含5个int的数组类型
    ArrType* ptr = &a;     // ptr是指向ArrType的指针
    cout << (*ptr)[2] << endl;

    /* 指针算数运算 */
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5] = {6, 7, 8, 9, 10};
    
    int (*ptrSum)[5] = &arr1;
    cout << "arr1的地址" << arr1 << endl;
    cout << "arr2的地址" << arr2 << endl;
    cout << "运算之前:*ptrSum: " << *ptrSum << endl;

    ptrSum++;  // 此时ptrSum会指向新地址(arr1当前地址+数组大小*4个字节)
    cout << "运算之后:*ptrSum: " << *ptrSum << endl;

    // 打印arr1中每个元素的地址
    cout << "arr1中每个元素的地址:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "arr1[" << i << "]的地址: " << &arr1[i] << endl;
    }

    // 打印arr2中每个元素的地址
    cout << "arr2中每个元素的地址:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "arr2[" << i << "]的地址: " << &arr2[i] << endl;
    }
    return 0;
}
