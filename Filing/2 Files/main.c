#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	FILE *fp1,*fp2;
	fp1=fopen("C:\\Users\\Omar Faheem\\Desktop\\abc.txt","r");
	if (fp1==NULL)
	{
		printf("File 1 not Found!");
		return;
	}
	fp2=fopen("C:\\Users\\Omar Faheem\\Desktop\\copy1.txt","w");
	if (fp2==NULL)
	{
		printf("File 2 not Found!");
		return;
	}
	while (1)
	{
		ch=fgetc(fp1);
		if (ch==EOF)
		break;
		else
		fputc(ch,fp2);
	}
	fclose(fp1);
	fclose(fp2);
}
