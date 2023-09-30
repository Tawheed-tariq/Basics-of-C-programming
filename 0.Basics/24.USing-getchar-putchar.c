#include<stdio.h>
int main()
{
    char grade;
    printf("Enter your grade: ");
    grade = getchar();
    printf("Your grade is ");
    putchar(grade);
    printf("\n");
    return 0;
}