#include<stdio.h>

int main()
{
    int arr[100],n,i,key,position,flag = 0;

    printf("Enter your total element: ");
    scanf("%d",&n);

    printf("Enter %d array elements: ", n);

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d",&key);

    for(i=0; i<n; i++)
    {
        if(arr[i]==key)
        {
            flag = 1;
            break;
        }
    }

    if(flag==1)
        printf("The %d is found at the position -- %d", key,i+1);
    else
        printf("Search is not found....");

    return 0;
}
