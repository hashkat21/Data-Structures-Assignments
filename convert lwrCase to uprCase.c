// **convert lower case string to upper case string.
#include<stdio.h>
void lwr_to_upr(char str[])
{
   int i=0;
   while(str[i]!='\0')
   {
   	 
   	   if(str[i]>='a' && str[i]<='z')
   	        str[i]=str[i]-('a'-'A');//convert uppercase by subtracting with difference.
			   	   
	   i++;
   	
   }
  	
}

int main()
{
	int n;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	
	char str[n];
	printf("Enter the string: ");
	scanf("%s",&str);
	
	lwr_to_upr(str);
	printf("The uppercase of entered string is: %s",str);
	
	return 0;	
}