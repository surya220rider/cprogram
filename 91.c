#include <stdio.h>
#include<conio.h>
void main()
{
int l,b,h;
scanf("%d %d %d",&l,&b,&h);
int volume,tsa;
volume=l*b*h;
tsa=2*((l*b)+(b*h)+(h*l));
printf("VOLUME=%d",volume);
printf("TSA=%d",tsa);
getch();
}
