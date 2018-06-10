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
	struct biodata *x;
	int num=0;
	printf ("enter total num: ");
	scanf ("%d",&num);
//	struct biodata *x=(struct biodata*)malloc(sizeof(struct biodata)*num);
	x=(struct biodata*)malloc(sizeof(struct biodata)*num);
	int i;
	for (i=0;i<num;i++)
	{
	printf("enter name ");
	scanf("%s",x[i].name);
	printf("\nenter age ");
	scanf("%d",&x[i].age);
	printf("\nenter height ");
	scanf("%f",&x[i].height);
	}
	fuc(x,num);
	free(x);
}
int fuc(struct biodata *x,int num)
{

FILE *fp1;
fp1=fopen("C:\\Users\\Omar Faheem\\Desktop\\new.txt","w");
if(fp1==NULL)
{
	printf("no file found");
	return;
}
int i;
for (i=0;i<num;i++)
{
fprintf(fp1,"student's name %s\n",x[i].name);
fprintf(fp1,"age %d\n",x[i].age);
fprintf(fp1,"height %f\n",x[i].height);
}
fclose(fp1);
}
