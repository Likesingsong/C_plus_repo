#include <iostream>
using namespace std;

int main() {
    int a = 10;           // Define an integer variable a
    int* p = &a;          // Define a pointer to int p, and let it point to the address of a

    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;
    cout << "Value of p (i.e., address of a): " << p << endl;
    cout << "Address of p: " << &p << endl;
    cout << "Value of *p (i.e., value of a): " << *p << endl;

    *p = 20;              // Modify the value of a through the pointer
    cout << "Value of a after modification via pointer: " << a << endl;

    int b = 30;
    p = &b;               // Let pointer p point to b
    cout << "Address of b: " << &b << endl;
    cout << "p now points to b, value of *p: " << *p << endl;
    cout << "Address of p: " << &p << endl;
    // Double pointer
    int** pp = &p;
    cout << "Value of pp (i.e., address of p): " << pp << endl;
    cout << "Value of *pp (i.e., value of p): " << *pp << endl;
    cout << "Value of **pp (i.e., value of b): " << **pp << endl;

    return 0;
}
