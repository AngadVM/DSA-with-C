#include<stdio.h>
int main(){
    int a,b;

    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    printf("Original numbers: %d %d \n",a,b);
    int temp=a;
    a=b;
    b=temp;
    printf("After swapping: %d %d",a,b);
    return 0;
}