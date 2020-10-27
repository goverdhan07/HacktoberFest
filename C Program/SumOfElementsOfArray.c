//A c program that simply takes elements of the array from the user and finds the sum of these elements.

#include<stdio.h>
void main()
{
    int n,i,sum=0,arr[20],j=0,add=0;

    printf("Enter the size of array: ");
    scanf("%d",&n);

    printf("Enter %d elements in the array: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    while(j<n)
    {
        add=add+a[j];
        j++;
    }

    printf("Sum of all elements of the array is %d",add);
    return 0;

}
