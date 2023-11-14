#include<stdio.h>
int fact1(int);//decleration of function
main()
{
	int n=5;///no. for factorial
	printf("factorial of n is %d",fact1(n));//calling the funct.
	
}
 int fact1(int n)
 {
 	if (n==0 || n==1)
 	return 1;
 	else
 	 return n*fact1(n-1);
 }
