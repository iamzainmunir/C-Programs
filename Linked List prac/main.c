#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct node{
	int value;
	struct node *link;
	};
int option=1;
void main(){
	
	struct node *root;
	root=NULL;
	
	
	
do{
	printf("Do you want to add or display? 1/0\n");
	int choice;
	scanf("%d",&choice);
if(choice==1){

	printf("Enter the value?\n");
	int value;
	scanf("\n%d",&value);
	append(&root,value);
}
else{
	
	display(root);
	break;
}
	
	
	
}while(option);
	
	
	
	
}




void append(struct node **root,int value){
	
	struct node *temp;
	temp=*root;
	if(temp==NULL){
	 
	 temp=(struct node*)malloc(sizeof(struct node));
	 temp->value=value;
	 temp->link=NULL;
	 *root=temp; 	
		
		
	}
	else{
	 
	 while(temp->link != NULL){
	 
	 temp=temp->link;	
	 	
	 	
	 }	
	 temp->link=(struct node*)malloc(sizeof(struct node));
	 temp=temp->link;
	 temp->value=value;
	 temp->link=NULL;
	 
		
		
	}
	
	
	
	
}


void display(struct node *root){
	struct node *temp=root;
	
	if(temp==NULL){
		printf("Linked List is empty");
		
	}
	else{
		
		if(temp->link==NULL)
			printf("%d",temp->value);
		else{
		
		while(temp->link != NULL){
			
			
		printf("%d\n",temp->value);
			temp=temp->link;
			
		
			
			
		}
		printf("%d\n",temp->value);
		
	}
		
	}
	
	
}
