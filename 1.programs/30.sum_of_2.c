#include<stdio.h>
int main()
{
    int num_1, num_2, sum;
    printf("Enter two number for sum: ");
    scanf("%d\n%d", &num_1, &num_2);
    sum = num_1 + num_2;
    printf("The sum of two numbers is %d\n", sum);
    return 0;
}