#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

char s[10];
int top=-1;
void push (char ch)
{
	s[++top]=ch;
}
char pop ()
{
	return s[top--];
}
int precedence (char ch)
{
	switch (ch)
	{
		case '#':
			return 0;
			break;
		case '(':
			return 1;
			break;
		case '+':
		case '-':
			return 2;
			break;
		case '*':
		case '/':
			return 3;
			break;
	}
}
int main ()
{
	char ch,ch1;
	int i=0,k=0;
	char infix[50],postfix[50];
	printf("Enter infix expression: ");
	scanf("%s",infix);
	push('#');
	while ((ch=infix[i++])!=NULL)
	{
		if (isalnum (ch))
		{
			postfix[k++]=ch;
		}
		else if(ch=='(')
		push(ch);
		else if(ch==')')
		{
			while(s[top]!='(')
			{
				postfix[k++]=pop();
			}
			ch1=pop();
		}
		else{
			while (precedence(s[top])>=precedence(ch))
			{
			    postfix[k++]=pop();
			}
			push (ch);
		}
	}
	while(s[top]!='#')
	postfix[k++]=pop();
	ch1=pop();
	printf("Postfix: %s",postfix);
	return 0;
}



