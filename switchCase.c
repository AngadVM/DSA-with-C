#include <stdio.h>
#include<conio.h>
#include<math.h>

int main(){
    char op;
    int n1,n2;
    printf("Enter operator:");
    scanf("%c",&op);
    printf("Enter operands:");
    scanf("%d %d",&n1,&n2);

    switch(op){
        case '+': 
            printf("the sum is: %d+%d=%d",n1,n2,n1+n2);
            break;
        case '-': 
            printf("the diff is: %d-%d=%d",n1,n2,n1-n2);
            break;
        case '*': 
            printf("the product is: %d*%d=%d",n1,n2,n1*n2);
            break; 
        case '/': 
            printf("the qoutient is: %d/%d=%d",n1,n2,n1/n2);
            break; 
        default: 
            printf("Error");
            break;      



    }
  
    return 0;
}