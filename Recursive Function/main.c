#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	scanf("%d",&a);
	b=fact(a);
	printf("%d",b);
	
}
int fact(int a)
{
	if (a==0)
	{
	return 1;
}
	else
	a=a*fact(a-1);
}
