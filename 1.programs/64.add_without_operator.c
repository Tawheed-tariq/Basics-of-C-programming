#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter two numbers: ");
    scanf("%d%d",&num1,&num2);
    for(int i = 1;i<=num2;i++)
    {
        num1++;
    }
    printf("%d",num1);
    return 0;
}