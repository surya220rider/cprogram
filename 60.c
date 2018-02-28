#include<stdio.h>
void main()
{
int a=0,b=1,c,n,i;
printf("Enter the value");
scanf("%d",&n);
printf("The fibonacci series");
printf("%d %d ",a,b);
for(i=2;i<n;i++)
{
c=a+b;
printf("%d ",c);
a=b;
b=c;
}
}
