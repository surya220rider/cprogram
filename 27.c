#include<stdio.h>
#include<string.h>
int main()
{
char a[30];
int j,b=0;
printf("enter the string\n");
scanf("%s",&a);
for(j=0;a[j]=0;j++)
{
if(a[j]=='0'||a[j]=='1'||a[j]=='2'||a[j]=='3'||a[j]=='4'||a[j]=='5'||a[j]=='6'||a[j]=='7'||a[j]=='8'||a[j]=='9')
{
b=b+1;
}
}
if(b==1)
{
printf("yes");
}
else
{
printf("no");
}
 return 0;
}
