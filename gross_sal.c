#include <stdio.h>

int main()
{
    int sal;
    float da,hr,gross;
    printf("Enter salary:");
    scanf("%d",&sal);
    da=0.40;
    hr=0.20;
    gross=sal+da+hr;
    printf("%f",gross);
    return 0;
}