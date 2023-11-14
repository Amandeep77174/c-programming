//write a program to find the ! of a no.
#include<stdio.h>
main()
{
	int i=1, n, fact=1;
	printf("value of n=");
	scanf("%d",&n);
	
	while(i<=n)
	{
		fact=fact*i;
		
		i++;
		
	}
	printf("factorial is %d",fact);
	
}
