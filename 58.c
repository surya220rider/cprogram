#include<stdio.h>
void main()
{
int a,b,c;
scanf("%d %d",&a,&b);
c=a^b;
b=a^b;
c=a^b;
printf("%d %d",a,b);
}
