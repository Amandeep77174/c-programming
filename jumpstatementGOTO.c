#include<stdio.h>
main()
{
   int n;
   for (n=10; n>0; n=n-1)
  {
    if (n%2==1)
    goto idontknow;
    printf(" \t%d",n);
   }	
   idontknow:
   	printf("\n after this not an even number");
}
