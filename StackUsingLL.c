#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node*link;
};
struct Node*top=NULL;
void Push(int x){
	struct Node*temp= malloc(sizeof(struct Node));
	temp->data=x;
	temp->link=top;
	top=temp;
}
void Pop(){
	struct Node*temp;
	if (top==NULL){
		return ;
	}
	temp=top;
	top=top->link;
	free(temp);
}
void Print(){
	struct Node*temp=top;
	printf("Stack: ");
	while (temp!=NULL){
		printf(" %d ",temp->data);
		temp=temp->link;
	}
	printf("\n");
}
void Top(){
	struct Node*temp= top;
	if (top==NULL){
		return;
	}
	else{
		temp=top;
		top=top->link;
		printf("%d",temp->data);
	}
	printf("\n");
}
void IsEmpty(){
	if (top==NULL){
		printf(" The stack is Empty");
	}
	else{
		printf("Not Empty");
	}
}
int main(){
	Push(2);
	Push(3);
	Push(4);
	Print();
	Top();
	Print();
	Pop();
	Print();
	return 0;
}
