//program to print elements of fibo series
#include<stdio.h>
int fibo(int);
int main ()
{
    int n,f;
    printf("Enter the term of fibonacci series:\n");
    scanf("%d",&n);
    f=fibo(n);
    printf("%d term of fibonacci series is %d",n,f);
    return 0;
}
int fibo(int n)
{
    if(n==1 || n==2)
    return 1;
    else
    return fibo(n-1)+fibo(n-2);
}