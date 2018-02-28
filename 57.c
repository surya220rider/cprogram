#include<stdio.h>
#include<conio.h>
void main()
{
 int m,n,temp;
 printf("enter two numbers");
 scanf("%d %d",&m &n);
 temp=m;
 m=n;
 n=temp;
 printf("the swapped values are %d,%d",m,n);
 getch();
 }
