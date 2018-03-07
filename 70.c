#include<stdio.h>
void main()
{
int m,n=0,a=1,b=2,i;
printf("Enter the number:");
scanf("%d",&m);
while(m!=1)
{
m=m/2;
n++;
}
for(i=0;i<n+1;i++)
{
a=a*b;
}
printf("The nearest greater power of 2 is:%d",a);
}
