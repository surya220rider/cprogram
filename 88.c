#include <stdio.h>
#include<conio.h>
void main()
{
int x,y,remainder,lcm,gcd,a,b;
printf("Enter the first number:");
scanf("%d",&x);
printf("Enter the second number:");
scanf("%d",&y);
a=x;
b=y;
do
{
remainder=x%y;
if(remainder==0)
break;
x=y;
y=remainder;
}
while(remainder!=0);
gcd=y;
lcm=(a*b)/gcd;
printf("The lcm is:%d",lcm);
getch();
}
