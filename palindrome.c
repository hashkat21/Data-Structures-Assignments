#include<stdio.h>
int palindrome(char str[])
{
    int start=0,end=0;
    while(str[end] != '\0')
        end++;
        end--;
    while(start<end)
   { if(str[start] != str[end])
    return 0;
    start++;
    end--;
   }
   return 1;
}
 int main ()
 {
    int n;
    printf("Enter size of string:\n");
    scanf("%d",&n);
    char str[n];
    printf("Enter the string:\n");
    scanf("%s",&str);
    if(palindrome(str))
    printf("the string is palindrome.\n");
    else
    printf("The string is not palindrome.\n");
    return 0;
 }