#include <stdio.h>
#include<conio.h>
struct biodata
{
	char name[50];
	int age;
	float height;
}x;
int main()
{
	printf("enter name ");
	scanf("%s",x.name);
	printf("\nenter age ");
	scanf("%d",&x.age);
	printf("\nenter height ");
	scanf("%f",&x.height);
FILE *fp1;
fp1=fopen("C:\\Users\\Omar Faheem\\Desktop\\new.txt","w");
if(fp1==NULL)
{
	printf("no file found");
	return;
}
fprintf(fp1,"student's name %s\n",x.name);
fprintf(fp1,"age %d\n",x.age);
fprintf(fp1,"height %f\n",x.height);
fclose(fp1);
}
