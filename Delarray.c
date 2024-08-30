// Program to delete and element from an array
#include<stdio.h>
int main ()
{
    int n,i,item,index;
    printf("Enter the Size of the array:");
    scanf("%d",&n);
    int Arr[n];
    printf("Enter the elements of the array one by one :\t");
    for(i=0;i<n;i++)
    {
        scanf("%d",&Arr[i]);
    }
    printf("Elements of array before deletion:\n");
    for(i=0;i<n;i++)
    {
        printf("%d \t ",Arr[i]);
       
    }
    printf("\n");
    printf("Enter the Elements you want to delete:\n");
    scanf("%d",&item);
    //for comparison 
    for(i=0;i<n;i++)
    {
        if(Arr[i]==item)
        {
            index=i;
            break;
        }
    }
    //for shift
    for(i=index;i<n;i++)
    {
        Arr[i]=Arr[i+1];
    }
    //reduce size
    n=n-1;
    //display array
    printf("Elements of array after deletion :\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t", Arr[i]);
    }
   return 0;
}