// program to remove all instances of an element
#include<stdio.h>
void deleteElement(int Arr[],int *n,int element)
{
    int i,j=0;
    for(i=0;i<*n;i++)
    {
        if(Arr[i]  != element)
        {
            Arr[j++]=Arr[i++];
        }
    }
    *n=j;
}
int main ()
{
    int n,i,element;
    printf("Enter the size of the Array:\n");
    scanf("%d",&n);
    int Arr[n];
    printf("Enter the elements of the Array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&Arr[i]);
    }
    printf("Elements of Array Before Deletion:\t");
    for(i=0;i<n;i++)
    {
        printf("%d\t",Arr[i]);
    }
    printf("\n");
    printf("Enter the Element whose instances you want to delete:\n");
    scanf("%d",&element);
    //calling the function which removes all instances of an element
    deleteElement(Arr,&n,element);
    printf("The array After deleting instances of an element %d is:\n",element);
    for(i=0;i<n;i++)
    {
        printf("%d\t",Arr[i]);
    }
   
    return 0;

}