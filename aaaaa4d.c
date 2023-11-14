#include<stdio.h> 
main()
{
	printf("%d",123);
	printf("\n%4d",123);
	printf("\n%04d",123);
	printf("\n%-04d",123);// -ve means ignore everything and shift to left side
	printf("\n%+04d",123);
	printf("\n%3d",123);// nothing will change
	printf("\n%2d",123);
}
