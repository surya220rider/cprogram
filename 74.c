#include<stdio.h>
#include<conio.h>
void main()
{
int n,l,r;
printf("enter the number:");
scanf("%d",&n);
printf("enter the left and right range:");
scanf("%d %d",&l,&r);
if(n>l && n<r)
{
printf("yes");
}
else
{
printf("no");
}
getch();
}
