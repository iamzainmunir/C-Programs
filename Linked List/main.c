#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int value;
	struct node *link;
};
int main ()
{
	struct node *root;
	root=NULL;
	Append(&root,10);
	Display(root);
}
int Append(struct node **root,int data)
{
	struct node *temp;
	if (*root==NULL)
	{
		temp=malloc(sizeof(struct node));
		*root=temp;
	}
	else
	{
		temp=*root;
		while (temp->link!=NULL)
		{
			temp=temp->link;
		}
		temp->link=malloc(sizeof(struct node));
		temp=temp->link;
	}
	temp->value=data;
	temp->link=NULL;
}
int Display(struct node *root)
{
	struct node *temp;
	if (root==NULL)
	{
		printf ("Linked List is Empty.");
		return;
	}
	else
	{
		temp=root;
		while (temp!=NULL)
		{
			printf ("%d\n",temp->value);
			temp=temp->link;
		}
		//printf ("%d\n",temp->value);
	}
}
