#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("enter the value");
scanf("%d",&n);
if(n>0)
{
printf("the given number is positive");
}
else if(n<0)
{
printf("the number is negative");
}
else
{
printf("the number is zero");
}
getch();
}
