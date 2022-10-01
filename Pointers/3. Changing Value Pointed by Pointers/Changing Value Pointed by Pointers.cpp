#include<iostream>
using namespace std;

int main()
{
    int var = 5;
    int *ptr = &var;

    cout << "Before changing the value of var variable: " <<endl;
    cout << "Value of var: " << var<<endl;

    *ptr = 2;
    cout << "After changing the value of var variable: "<<endl;
    cout << "Value of var: " <<var<<endl;
}
