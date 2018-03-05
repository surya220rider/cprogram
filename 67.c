#include<stdio.h>
void main()
{
int n,r,m;
printf("enter the value");
scanf("%d",&n);
r=n%10;
m=n+(10-r);
printf("%d",m);
}
