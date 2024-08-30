//recursive program to convert decimal to hexadecimal.
#include<stdio.h>

void hexa(int n)
{
	if(n<16)
	{
		if(n<10)
		  printf("%d",n);
		else
		  printf("%c",'A'+(n-10));
	}
	    
	else
	{
		int result=n%16;
		hexa(n/16);
		if(result<10)
		  printf("%d",result);
		else
		  printf("%c",'A'+(result-10));
		
	}
}
int main()
{
	int n;
	printf("Enter any number: ");
	scanf("%d",&n);
	hexa(n);
	
	printf("\n");
	return 0;
}