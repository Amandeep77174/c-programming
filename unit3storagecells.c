#include<stdio.h>
extern int n=9;
int y=5;
main()
{
	int w;
	 static int x=8, m;
	auto int k;
    printf(" m=%d",m);
	mystatic();
	mystatic();
	mystatic();
		
	printf("\n value of  variable in main is %d",n);
}
mystatic()
{
 static int j=5;
	printf("\n value of static variable inside function is %d",j);
	j++;
	printf(" \n value of extrn varial in function= %d",n);
	n++; 
}
