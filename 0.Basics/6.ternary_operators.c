#include<stdio.h>

int main()
{
    int x;
    float salary;
    printf("enter the number of products sold in a week: ");
    scanf("%d", &x);
    salary = (x != 40) ? ((x < 40) ? (4*x + 100) : (4.5*x + 150)) : 300;
    printf("Your salary for this week is %.2f$", salary);
    return 0;
}