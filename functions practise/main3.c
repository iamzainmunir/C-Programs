#include <stdio.h>
#include <conio.h>
int main()
{
	int num;
	printf("enter number\n");
	scanf("%d",&num);
	int a;
	a=fact(num);
	printf("factorial of given number is %d",a);

}
int fact(int a)
{
	if(a==0)
	return 1;
	else
	a=a*fact(a-1);
	return a;

}
