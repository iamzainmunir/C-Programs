#include<conio.h>
#include<stdio.h>
int main()
{
//	for single input reading (without spaces)
//	char ch[20];
//	FILE *fp;
//	fp=fopen("asad.txt","r");
//	fscanf(fp,"%s",ch);
//	printf("%s",ch);
//	fclose(fp);
	//for number of input (with spaces), increase the variable with spaces.
	char ch[200];
		FILE *fp;
fp=fopen("asad.txt","r");
	fgets(ch,150,fp);
	printf(ch);
	fclose(fp);
}
