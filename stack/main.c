#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int cont;
int top=-1;
char array[10];	
void main(){

do{
	
	printf("Do you want to pop then select 1 and if you want to push then select 2\n");
	int option;
	scanf("%d",&option);
	if(option==1){
		pop();
	}else if(option==2){
		printf("Enter the value\n");
		char value;
		scanf("%s",&value);
		push(value);
		

	}
	printf("Do you want to continue(1/0)\n");
	
	scanf("%d",&cont);
}
while(cont==1);
	
	
	
	
	
	
}

int isempty(){
 	
 	if(top==-1){
 		
 		return 1;
 		
	 }
	 else
	   return 0;	
	
}

int isfull(){
 	
	if(top==9){
		
		return 1;
	}
	else
	    return 0;
}


void push(char value){
	
	if(isfull())
	printf("Stack is full");
	
	else{
		array[top+1]=value;
		
		top++;
		
		
	}
}


void pop(){
	
	if(isempty()){
		printf("Stack is empty");
		
	}
	else{
	while(top>=0){
	
		printf("%c",array[top]);
		top--;
		printf("\n");
}
}
}


