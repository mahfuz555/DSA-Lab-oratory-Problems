#include<iostream>
using namespace std;

void swap(int *n1, int *n2)
{
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}


int main()
{
    int a, b;
    a = 5;
    b = 6;
    cout << "Before swaping this value of a and b: " << a <<" " <<b <<endl;

    swap(&a,&b);
    cout << "After swaping this value of a and b: " << a <<" " <<b <<endl;
}
