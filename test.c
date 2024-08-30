//program for reversing the elements of an array
#include<stdio.h>
int main ()
{
    int n;
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The elements of array are :\t");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    printf("The elements of array in reversed order are:\n");
    for(int i=n-1;i>=0;i--)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}