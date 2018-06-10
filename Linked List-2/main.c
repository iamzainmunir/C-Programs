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
	int num=0;
	char wish=0,a=0;
	struct node *root;
	root=NULL;
	operations:
	printf ("\nList Operations:\n");
	printf ("a. Append\n");
	printf ("b. Delete\n");
	printf ("c. Display\n");
	printf ("d. Exit\n");
	printf ("Enter Your Choice:\n");
	a=getche();
	fflush(stdin);
	switch (a)
	{
		case 'a':
			{
				printf ("\nEnter Value to Append: ");
				scanf ("%d",&num);
				Append (&root,num);
				start_a:
				printf ("\nWish to Continue? (y/n)\n");
				wish=getche();
				if ( wish=='y' || wish=='Y')
				{
					goto operations;
				}
				else if ( wish=='n' || wish=='N' )
				{
					exit(0);
				}
				else
				{
					printf ("\nSelect Correct Option!");
					goto start_a;
				}
			}
		case 'b':
			{
				if (root==NULL)
				{
					printf ("\nList is Empty!");
				}
				else
				{
				printf ("\nEnter the Value to Delete: ");
				scanf ("%d",&num);
				Delete (&root,num);
				}
				start_b:
				printf ("\nWish to Continue? (y/n)\n");
				wish=getche();
				if ( wish=='y' || wish=='Y')
				{
				goto operations;
				}
				else if ( wish=='n' || wish=='N' )
				{
				break;
				}
				else
				{
					printf ("\nSelect Correct Option!");
					goto start_b;
				}
			}
		case 'c':
			{
				Display(root);
				start_c:
				printf ("\nWish to Continue? (y/n)\n");
				wish=getche();
				if ( wish=='y' || wish=='Y')
				{
				goto operations;
				}
				else if ( wish=='n' || wish=='N' )
				{
				break;
				}
				else
				{
					printf ("\nSelect Correct Option!");
					goto start_c;
				}
			}
		case 'd':
			{
				printf ("\nCommand Confirmed!");
				break;
			}
		default:
			{
				printf ("\nWrong Option Selected!");
				start_d:
				printf ("\nWish to Continue? (y/n)\n");
				wish=getche();
				if ( wish=='y' || wish=='Y')
				{
				goto operations;
				}
				else if ( wish=='n' || wish=='N' )
				{
				break;
				}
				else
				{
					printf ("\nSelect Correct Option!");
					goto start_d;
				}
			}
	}
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
		printf ("\nLinked List is Empty.");
		return;
	}
	else
	{
		temp=root;
		while (temp!=NULL)
		{
			printf ("\n%d",temp->value);
			temp=temp->link;
		}
	}
}
int Delete(struct node **root,int data)
{
	struct node *temp,*prev;
	temp=*root;
	if (temp==NULL)
	{
		printf ("\nList is Empty!");
		return;
	}
	else
	while (temp!=NULL)
	{
		if (temp->value==data)
		{
			if (temp==*root)
			{
				*root=temp->link;
				free(temp);
				printf ("Deleted Successfully!");
				return;
			}
			else
			{
				prev->link=temp->link;
				free(temp);
				printf ("Deleted Successfully!");
				return;
			}
		}
		else
		{
			prev=temp;
			temp=temp->link;
		}
	}
	printf ("\nElement not found!");
}
