#include <stdio.h>
void main() 
{
int n, i,c=0;
scanf("%d",&n);
for(i=2; i<=n/2; ++i)
{
if(n%i==0)
{
c=1;
break;
}
}
if(c==0)
printf("yes");
else
printf("no");
}
