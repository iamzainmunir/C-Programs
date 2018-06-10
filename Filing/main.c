#include<stdio.h>
#include<conio.h>
int main(){
	char ch;
	FILE *fp;
	fp=fopen("asad.txt","r");
	if (fp==NULL)
	{
		printf("File Not Found!");
		return;
	}
	while (1)
	{
		ch=fgetc(fp);
		if (ch==EOF)
		break;
		else
		printf("%c",ch);
	}
}
