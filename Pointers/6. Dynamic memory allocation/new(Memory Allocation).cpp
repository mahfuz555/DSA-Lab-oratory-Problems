#include<iostream>
using namespace std;
int main()
{
    int *ptr;
    ptr = new int;
    *ptr = 10;
    cout << "The value of the pointer: " << *ptr<<endl;
    delete ptr;
    return 0;
}
