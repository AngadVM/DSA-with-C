#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node*next;
};
struct Node*head;
void Insert(int data,int n){
	struct Node*temp1= malloc(sizeof(struct Node));
	temp1->data=data;
	temp1->next=NULL;
	if (n==1){
		temp1->next=head;
		head=temp1;
		return;
	}
	struct Node*temp2=head;
	int i;
	for( i=0;i<(n-2);i++){
		temp2=temp2->next;
	}
	temp1->next=temp2->next;
	temp2->next=temp1;
	
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
int main(){
	head=NULL;
	Insert(2,1); //2
	Insert(3,2); // 2,3
	Insert(4,3);// 2,3,4
	Insert(5,4);// 2,3,4,5
	Insert(10,3);//2,3,10,4,5
	Print();
}
