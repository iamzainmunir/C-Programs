#include<conio.h>
#include<stdio.h>
int main()
{
	int base,power,ans;
	printf("Enter Base Value: ");
	scanf("%d",&base);
	printf("Enter Power: ");
	scanf("%d",&power);
	ans=func(base,power);
	printf ("%d",ans);
}
int func(int base,int power)
{
	int ans;
	if (base==0)
	{
		return 0;
	}
	if (power==0)
	{
		return 1;
	}
	else
	{
	ans=base*func(base,power-1);
}
	return ans;
}
