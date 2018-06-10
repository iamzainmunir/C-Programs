#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b,c;
	printf("enter first number");
	scanf("%d",&a);
	printf("enter second number");
	scanf("%d",&b);
	c=fun(a,b);
	printf("%d",c);
}
int fun(int a,int b)
{
	int c;
	c=a+b;
	return c;
}
