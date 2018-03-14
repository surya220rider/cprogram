#include <stdio.h>
#include<conio.h>
void main()
{
int a,b,i;
printf("enter the two numbers:");
for(i=1;i<=3;i++)
{
scanf("%d %d",&a,&b);
if(a>b)
{
printf("%d",a-b);
}
else
{
printf("%d",b-a);
}
}
getch();
}
