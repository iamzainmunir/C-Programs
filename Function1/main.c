#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf ("First Number: ");
	scanf("%d",&a);
	printf("enter second number");
	scanf("%d",&b);
	c=fun(a,b);
	printf("%d",c);
}
int fun(int a,int b)
{
	int c=a+b;
	return c;
}
