#include<stdio.h>

int main()
{
    int arr[100],n,i,position,value;
    printf("Enter your total element: ");
    scanf("%d",&n);
    printf("Enter %d array elements: ",n);
    for(i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
        }
    printf("Where the position, you update elements: ");
    scanf("%d",&position);

    printf("What value you changed: ");
    scanf("%d",&value);
    printf("\nThe original array element is:\n");

    for(i=0; i<n; i++)
        {
            printf("arr[%d] = %d\n",i,arr[i]);
        }

    //Update the array....

    arr[position-1] = value;

    printf("\nAfter update the array:\n");
    for(i=0; i<n; i++)
        {
            printf("arr[%d] = %d\n",i,arr[i]);
        }

    return 0;
}
