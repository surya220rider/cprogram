#include <stdio.h>
#include<string.h>
#include<conio.h>
void main() 
{
char str[50];
int i,flag=0;
printf("enter the string:");
scanf("%s",str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]==str[i+1])
{
flag=1;
break;
}
}
if(flag==1)
{
printf("no");
}
else
{
printf("yes");
}
getch();
}
