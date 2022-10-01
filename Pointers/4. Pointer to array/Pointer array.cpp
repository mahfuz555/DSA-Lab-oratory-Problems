#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int arr[3][3]={{2,3,4},{4,5,6},{7,8,9}};
    cout<<"The array elements are: "<<endl;
    for(int i=0; i<3; i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<*(*(arr+i)+j)<<" ";
            }
             cout<<endl;
        }
}
