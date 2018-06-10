#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num;
	printf("enter number\n");
	scanf("%d",&num);
	int c=table(num);
	
}
int table(int a)
{
	int i;
	for(i=0;i<=10;i++)
	{
		printf("%d X %d = %d\n",a,i,a*i);
	}
	
}
