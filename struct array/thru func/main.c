#include <stdio.h>
#include<conio.h>
struct biodata
{
	char name[50];
	int age;
	float height;
};
int main()
{
	struct biodata x[5];
	int i;
	for (i=0;i<5;i++)
	{
	printf("enter name ");
	scanf("%s",x[i].name);
	printf("\nenter age ");
	scanf("%d",&x[i].age);
	printf("\nenter height ");
	scanf("%f",&x[i].height);
	fuc(&x);
}
}
int fuc(struct biodata *x)
{

FILE *fp1;
fp1=fopen("C:\\Users\\Omar Faheem\\Desktop\\new.txt","w");
if(fp1==NULL)
{
	printf("no file found");
	return;
}
int i;
for (i=0;i<5;i++)
{
fprintf(fp1,"student's name %s\n",x[i].name);
fprintf(fp1,"age %d\n",x[i].age);
fprintf(fp1,"height %f\n",x[i].height);
}
fclose(fp1);
}
