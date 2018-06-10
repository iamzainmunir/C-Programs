#include <stdio.h>
#include <conio.h>
int main()
{
	int num;
	printf("enter number\n");
	scanf("%d",&num);
	int c=fun(&num);
}
int fun(int *b)
{
	int i;
	for(i=1;i<=10;i++)
	{
		printf("%d X %d= %d\n",*b,i,*b*i);
	}
	
}
