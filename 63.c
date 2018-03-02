#include <stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int i,n,count=1,j;
char a[10];
gets(a);
n=strlen(a);
for(i=0;i<n;i++)
{
if(a[i]==' ')
{
count++;
}
}
printf("%d",count);
getch();
}
