//factorial using recursion
#include<stdio.h>
int fact(int);
int main ()
{
    int n,f;
    
    printf("Enter the number for factorization:\n");
    scanf("%d",&n);
    f=fact(n);
    printf("The factorial of %d is %d\n",n,f);
    return 0;
}
int fact(int n)
{
    int t;
    if(n==1)
    return 1;
    else 
    t=n*fact(n-1);
    return t;
}