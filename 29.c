#include<stdio.h>
void main()
{
int minute;
int hour;
int minutes;
printf("Enter the minute");
scanf("%d",&minute);
hour=minute%60;
printf("hour:%d",hour);
minutes=minute-hour*60;
printf("minutes:%d",minutes);
}
