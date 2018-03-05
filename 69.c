#include<stdio.h>
void main()
{
int a,b,n;
printf("Enter the value of a,b");
scanf("%d %d",&a,&b);
n=a-b;
printf("%d",n);
if(n%2==0)
{
printf("\nThe value is even");
}
else
{
printf("\n the value is odd");
}
}
