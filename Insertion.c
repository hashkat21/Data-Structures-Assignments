#include<stdio.h>

int main ()
{
   
     int n,i,element,item,index;
      
   printf("Enter the size of the Array:");
   scanf("%d",&n);
   int arr[n];
    printf("Enter the elements of an array:");
    for(i=0;i<n-1;i++)
    scanf("%d",&arr[i]);
   
    printf("Enter the element after you want to insert:\n");
    scanf("%d",&element);
    
    for(i=0;i<n-1;i++)
    {
        if(arr[i]==element)
        {
            index=i;
            break;
        }
    }
    printf("Enter the item you want to insert.");
    scanf("%d",&item);
  

   n++;
   index++;
   for(i=n;i>index;i--)
   {
    arr[i]=arr[i+1];
    arr[index]=item;
   }

   printf("The elements of array are:\n");
   for(i=0;i<n-1;i++)
   {
    printf("%d\n",arr[i]);

   }

    
  return 0;

}

