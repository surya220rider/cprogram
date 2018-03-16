#include <stdio.h>
#include<conio.h>
void main()
{
int a,b,rem,gcd;
printf("enter the a:");
scanf("%d",&a);
printf("enter the b:");
scanf("%d",&b);
do
{
rem=a%b;
if(rem==0)
break;
a=b;
b=rem;
}
while(rem!=0);
gcd=b;
printf("the gcd of value: %d",gcd);
getch();
}
