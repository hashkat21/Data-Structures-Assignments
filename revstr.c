#include<stdio.h>
void reverse(char str[])
{
    int i=0;
    while(str[i] != '\0')
    {
        i++;
      
        for(i;i>-1;i--)
        printf("%s",str[i]);
    }


}

int main ()
{
int n;

printf("Enter size of string:\n");
scanf("%d",&n);
char str[n];
printf("Enter the string:\n");
scanf("%s",&str);    
reverse(str);
return 0 ;


}