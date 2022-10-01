#include<stdio.h>
int main()
{
    int array[100],n,i,position,value;

    printf("Enter your total element: ");
    scanf("%d",&n);

    printf("Enter %d array elements: ", n);

    for (i = 0; i < n; i++)
        scanf("%d", &array[i]);

    printf("Enter your position when we add a element: ");
    scanf("%d",&position);

    printf("Enter your value: ");
    scanf("%d",&value);

    for(i = n-1; i>=(position-1); i--)
    {
        array[i+1] = array[i];
    }

    array[position-1] = value;

    printf("\nAfter inserting an element: \n");
    for(i = 0; i<=n; i++)
    {
        printf("Array[%d] = %d\n",i,array[i]);
    }
    return 0;
}
