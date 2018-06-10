#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	printf("enter number");
	scanf("%d",&a);
	int arr[10]={4,5,7,8,10,15,48,80,88,99};
	int start=0;
	int end=9;
	int mid;
	//int flag=0;
	while(start<=end)
	{
		mid=(start+end)/2;
		if(arr[mid]==a)
		{
			printf("found");
			//flag=1;
			break;
		}
		else
		if(arr[mid]<a)
		{
			start=mid+1;
		}
		else 
		if(arr[mid]>a)
		{
			end = mid-1;
		}
		else
		if (start ==end)
		{
			printf("not found");
		}
		
	}
	
	
}
