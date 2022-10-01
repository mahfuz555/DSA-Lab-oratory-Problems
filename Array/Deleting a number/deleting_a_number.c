//Deleting a number into a Array Data Structure....
#include<stdio.h>
#define Maxsize 100
int main()
{
    int arr[Maxsize],n,position,i;
    printf("Enter the total element: ");
    scanf("%d",&n);

    printf("Enter your %d elements: ",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter your position when you delete elements: ");
    scanf("%d",&position);

    for(i = position-1; i>=(n-2); i++)
    {
        arr[i] = arr[i+1];
    }

    n=n-1;
    printf("\nAfter inserting an element: \n");
    for(i = 0; i<n; i++)
    {
        printf("Array[%d] = %d\n",i,arr[i]);
    }
    return 0;
}
