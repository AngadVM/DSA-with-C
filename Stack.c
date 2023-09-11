#include <stdio.h>
#define MAX_SIZE 101
int A[MAX_SIZE];
int top=-1;  // empty stack

void Push(int x){
	if (top==MAX_SIZE-1){
		printf(" ERROR: OVERFLOW");
		return;
	}
	A[++top]=x;
}
void Pop(){
	if (top==-1){
		printf("Stack is empty");
	}
	top=top-1;
}
void Top(){
	return A[top];
}
void Print(){
	int i;
	printf("Stack: ");
	for (i=0;i<=top;i++){
		printf(" %d ", A[i]);
	}
	printf("\n");
}
int main(){
	Push(2);Print();
	Push(3);Print();
	Push(4);Print();
	
	
	return 0;
}
