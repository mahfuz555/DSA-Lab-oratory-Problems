#include<iostream>
using namespace std;

int main()
{
    int var = 5;
    int *ptr;
    ptr = &var;

    cout << "Value of var: " << var << endl;
    cout << "Address of Var: " << &var <<endl;

    cout << "The value of the pointer variable: " << *ptr <<endl;
    cout << "The address of the pointer variable: " << ptr <<endl;

    return 0;
}
