#include <stdio.h>
#include<conio.h>
void main()
{
int n,flag=0,i;
scanf("%d",&n);
if(n%2!=0 && n>3)
{
for(i=3;i<n;i++)
{
if(n%i==0)
{
flag=1;
break;
}
}
(flag==1)
{
printf("composite number");
}
else
printf("not a composite number");
getch();
}
