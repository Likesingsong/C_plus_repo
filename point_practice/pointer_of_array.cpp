#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    /* Pointer to a fixed-size array */
    int a[5] = {1, 2, 3, 4, 5};
    int(*p)[5] = &a;
    (*p)[0] = 10;
    cout << a[0] << endl;

    /* Pointer to a dynamic array */
    int *dynamicArr = new int[5]; // dynamicArr points to the first element of the array
    dynamicArr[0] = 10;           // You can access array elements directly by index
    cout << dynamicArr[0] << endl;
    delete[] dynamicArr; // Release memory after use

    /* Use typedef or using to simplify types */
    typedef int ArrType[5];  // Define ArrType as an array type containing 5 ints
    ArrType* ptr = &a;       // ptr is a pointer to ArrType
    cout << (*ptr)[2] << endl;

    /* Pointer arithmetic */
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5] = {6, 7, 8, 9, 10};
    
    int (*ptrSum)[5] = &arr1;
    cout << "Address of arr1: " << arr1 << endl;
    cout << "Address of arr2: " << arr2 << endl;
    cout << "Before arithmetic, *ptrSum: " << *ptrSum << endl;

    ptrSum++;  // ptrSum now points to a new address (arr1 current address + array size * 4 bytes)
    cout << "After arithmetic, *ptrSum: " << *ptrSum << endl;

    // Print the address of each element in arr1
    cout << "Addresses of each element in arr1:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Address of arr1[" << i << "]: " << &arr1[i] << endl;
    }

    // Print the address of each element in arr2
    cout << "Addresses of each element in arr2:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Address of arr2[" << i << "]: " << &arr2[i] << endl;
    }
    return 0;
}
