#include<stdio.h>
#include<conio.h>
void sum1(); //function declaration
int main()
{
	sum1(3,6);
}
void sum1() //function definition
{
	int a=3, b=5, c;
	c=a+b;
	printf("sum is %d",c);
}

