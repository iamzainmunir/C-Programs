#include <stdio.h>
#include <stdlib.h>
int  main()
{
	int base,power,c;
	printf("enter base\n");
	scanf("%d",&base);
	printf("enter power\n");
	scanf("%d",&power);
	c=func(base,power);
	printf("%d",c);
}
int func(int base,int pow)
{
	if(base==0)
	{
	return 0;
}
	if (pow==0)
	{
	return 1;
	}
	else{
	
	int c=0;
	c=base*func(base,pow-1);
	return c;
}
}
