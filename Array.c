//Array contents taken from user and displayed them
#include<stdio.h>
int main ()
{
    int n,i;
   
    printf("Enter the size of the array:");
    
    scanf("%d",&n);
    int Arr[n];
    printf("Enter the elements of the array one by one :\n");
    for(i=0;i<n;i++)
    {
    
    scanf("%d",&Arr[i]);
    }

    //for display 
    for(i=0;i<n;i++)
    {
        printf("%d \t", Arr[i] );
    }
    return 0;
}