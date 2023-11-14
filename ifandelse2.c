#include<stdio.h>
main()
{
	int a,b,c,x;
	printf("enter the value of a = \nb = \nc = ");
	scanf("%d%d%d",&a,&b,&c);
	x=a+b+c;
	if(x>1 && x<200)
	{
		printf("rank 1");
		
	}
	if (x>201 && x<300)
{
     printf("rank 2");
	}	
}
