//no return type and no parameter
#include<stdio.h>
void print1();
main()

{
	print1();
	print1();//calling thee function
	print1();
	
}
void print1()
{
	int i;
	for (i=0;i<5;i++)
	printf("\n*");  //defining
	
}
