#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node*next;
};
struct node*head;  //global variable

void create(){
	struct node*newnode, *temp;
	int choice=1;
	while (choice){
		newnode= malloc(sizeof(struct node));
		printf("Enter data: ");
		scanf("%d", &newnode->data);
		newnode->next=NULL;
		
		if (head==NULL){
			head=temp=newnode;	
		}
		else{
			temp->next= newnode;
			temp=newnode;
		}
		printf("Do you want to continue(0,1)? ");
		scanf("%d", &choice);
	}
}

void display(){
	struct node*temp=head;
	int count=0;
	printf("\nThe Final list is: ");
	while(temp!=NULL){
		printf(" %d ", temp->data);
		temp=temp->next;
		count++;
	}

}

void Insert_at_begin(){
	struct node*newnode;
	newnode= malloc(sizeof(struct node));
	printf("\nInsert Data: ");
	scanf("%d", &newnode->data);
	if (head==NULL){
		head=newnode;
	}
	else{
		newnode->next=head;
		head=newnode;
	}
}

void Insert_at_end(){
	struct node*newnode,*temp;
	newnode= malloc(sizeof(struct node));
	printf("\nInsert data at the end:");
	scanf("%d", &newnode->data);
	
	temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=newnode;
}
void Insert_at_n(){
	struct node*temp,*newnode;
	int pos,i=1;
	printf("\nEnter position: ");
	scanf("%d",&pos);
	if(pos>sizeof(struct node)){
		printf("Invalid Position");
	}
	
	else{
		temp=head;
		while(i<pos){
			temp=temp->next;
			i++;
		}
		newnode=malloc(sizeof(struct node));
		printf("Enter inserting data: ");
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		newnode->next=temp->next;
		temp->next=newnode;
		
	}
}
Deletion_at_beginning(){
	struct node*temp;
	if(head==NULL){
		printf("List is empty");
	}
	else
	{
		temp=head;
		head=head->next;
		free(temp);
	}
}
void Deletion_at_end(){
	struct node*prevnode,*temp;
	temp=head;
	while(temp->next!=NULL){
		prevnode=temp;
		temp=temp->next;
	}
	if(temp==head){
		head=NULL;
	}
	else{
		prevnode->next=NULL;
		free(temp);
	}
}
void Deletion_at_n(){
	struct node*nextnode;
	int pos,i=1;
	struct node*temp=head;
	
	printf("\nEnter position: ");
	scanf("%d",&pos);
	while(i<pos-1){
		temp=temp->next;
		i++;
	}
	nextnode=temp->next;
	temp->next=nextnode->next;
	free(nextnode);
}
int main(){
	create();
	display();
	Deletion_at_n();
    display();
	

	return 0;
}

	

