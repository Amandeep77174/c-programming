//pass by or call by value
#include<stdio.h>
void swap1(int* ,int*);//we are using pointer **
main()
{
	int a, b;
	a=4;
	b=8;
	printf("a= %d and b= %d",a,b);
	swap1(&a,&b);//by using & the change is permanent
	printf(" \n After the swap  a= %d and b= %d",a,b);
}
void swap1(int *x,int *y)
{
	int z;
	z=*x;
	*x=*y;
	*y=z;
	printf("\n values after swapping a=%d and b =%d",x,y );
}
