#include<stdio.h>
#include<conio.h>
void main()
{
char str,str1;
printf("enter a string");
scanf("%s",&str);
str1=strrev(str);
if(str1==str)
{
printf("the value is palindrome");
}
else
{
printf("the value is not palindrome");
}
getch();
}
