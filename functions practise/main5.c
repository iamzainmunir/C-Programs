#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp1,*fp2;
	fp1=fopen("C:\\Users\\Omar Faheem\\Desktop\\new.txt","r");
	if(fp1==NULL)
	{
		printf("no file found");
	}
	fp2=fopen("C:\\Users\\Omar Faheem\\Desktop\\pp.txt","w");
	if (fp2==NULL)
	{
		printf("no file found");
	}
	while(1)
	{
		char ch;
		ch=fgetc(fp1);
		if(ch==EOF)
		break;
		else;
		fputc(ch,fp2);
	}
	fclose(fp1);
	fclose(fp2);
}
