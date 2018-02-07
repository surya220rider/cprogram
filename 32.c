#include<stdio.h>
#include<string.h>
int main()
{
int i,j=0;
char a[50];
gets(a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]!='\0')
{
j++;
}
}
printf("%d",j+1);
return 0;
}
