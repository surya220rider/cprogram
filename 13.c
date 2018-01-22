#include <stdio.h>
void main()
{
int n, i, res= 0;
printf("Enter a positive number: ");
scanf("%d",&n);
for(i=2; i<=n/2; ++i)
    {
        if(n%i==0)
        {
            res=1;
            break;
        }
    }

    if (res==0)
        printf("%d is a prime number.",n);
    else
        printf("%d is not a prime number.",n);
  }
