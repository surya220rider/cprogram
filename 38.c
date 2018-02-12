#include<stdio.h>
void swap(int *,int *);
void main()
{
int num1,num2;
printf("enter two numbers");
scanf("%d %d",&num1,&num2);
printf("The numbers before swapping=%d",num1,num2);
swap(&num1,&num2);
printf("The numbers after swapping=%d",num1,num2);
}
void swap(int *x,int *y)
{
*x=*x^*y;
*y=*x^*y;
*x=*x^*y;
}
