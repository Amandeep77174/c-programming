//jump statements- break, continue, goto- \,return
#include<stdio.h>
main()
{
   int n;
   for (n=10; n>0; n=n-1)
  {
    if (n%2==1)
    break;
    printf(" \t%d",n);
   }	
}
