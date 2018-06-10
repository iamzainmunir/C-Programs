#include<stdio.h>
#include<conio.h>
struct biodata
{
	int age;
	char name[50];
	float height;
}x;
int main()
{
	func(&x);
	FILE *file;
	file=fopen("data.txt","w");
	fprintf(file, "Student's Name: %s",x.name);
	fprintf(file, "\nStudent's Age: %d",x.age);
	fprintf(file, "\nStudent's Height: %f",x.height );
	printf("Student's Name: %s",x.name);
	printf("\nStudent's Age: %d",x.age);
	printf("\nStudent's Height: %f",x.height );
}
int func(struct biodata *a)
{
	printf("Name ?\n");
	scanf("%s",a->name);
	printf("\nAge ?\n");
	scanf("%d",&a->age);      
	printf("\nHeight ?\n");
	scanf("%f",&a->height);
	
	
	

	//FILE *fp=fopen("C:\\Users\\Omar Faheem\\Desktop\\abc.txt","w");


}
