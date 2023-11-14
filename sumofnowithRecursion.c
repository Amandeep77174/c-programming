//find out the sum of no. with recursion
#include<stdio.h>
main()
{
	int num=5;
	printf("sum= %d",addnum(num));	
	
}
int addnum(int n )
{
	if (n==0)
    	return n;
	else
	 return n + addnum(n-1);
}
