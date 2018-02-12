#include<stdio.h>
int main() 
{
int n,a=0,b=0,i;
printf("Enter a   number:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
if(i<==1)
{
d=i;
else
{
d=a+b;
a=b;
b=d;
}
printf("The fibonacci Numbers are:%d",d);
}
}
