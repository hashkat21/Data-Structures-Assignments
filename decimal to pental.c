//recursive program to convert decimal to pental.
#include<stdio.h>
#include<stdlib.h>

void penta(int n)
{
	if(n<5)
	    printf("%d",n);
	else
	{
		int result=n%5;
		penta(n/5);
		printf("%d",result);
	}
}
int main()
{
	int n;
	printf("Enter any number: ");
	scanf("%d",&n);
	printf("%d in pental(base 5) are: ",n);
	penta(n);
	
	printf("\n");
	return 0;
}