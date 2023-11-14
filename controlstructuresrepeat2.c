//loop statements(while , do while) for getting one output many times
#include<stdio.h>
main()
{
int i=1,n,sum=0;
printf("enter valuer of n= ",n);
scanf("%d",&n);
while(i<=n)
{
	sum=sum+i;
	i++;
	
}
printf("%d",sum);
}
