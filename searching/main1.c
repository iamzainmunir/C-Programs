#include<stdio.h>
#include<conio.h>
int main()
{
	int num;
	printf("enter number");
	scanf("%d",&num);
	int mil=0;
	int arr[10]={1,15,1,4,78,45,12,8,4,7};
	int i;
	for(i=0;i<10;i++)
	{
		if(num==arr[i])
		{
			mil=1;
			break;
		}
	}
	if(mil==0){
		printf("not found");
	}
	else
	{
	
	printf("found");
	}}
