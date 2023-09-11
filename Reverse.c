#include <stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node*next;
};
struct Node*head;
void Insert(int x){
	struct Node*temp= malloc(sizeof(struct Node));
	temp->data=x;
	temp->next=head;
	head=temp;
}
void Print(){
	struct Node*temp=head;
	printf("The List is: ");
	while(temp!=NULL){
		printf(" %d ",temp->data);
		temp=temp->next;
	}
	printf("\n");
}
void Reverse(struct Node*p){
	if(p==NULL){
		head=p;
		return;
	}
	Reverse(p->next);
	struct Node*q=p->next;
	q->next=p;
	p->next=NULL;
}
void ReversePrint(struct Node*p){
	if (p==NULL){
		return;
	}
	ReversePrint(p->next);
	printf(" %d ",p->data);
}

int main(){
	head=NULL;
	int n,i,x;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	printf("Enter values: ");
	for (i=0;i<n;i++){
		scanf("%d",&x);
		Insert(x);
		Print();
	}
	printf("After reversing the list:");
	ReversePrint(head);
	return 0;
	
}
