#include<stdio.h>
#include<stdlib.h>
int main()
{
    char grade;
    printf("Enter your grade: ");
    scanf(" %c", &grade);
    switch (grade){
case 'A' :
    printf("You have a good grade!");
    break;
case 'B':
    printf("You have a Quite low grade, do better next time!");
    break;
case 'C' :
    printf("Your grade is low, do better next time!");
    break;
case 'D' :
    printf("You have not qualified!");
    break;
    default :
        printf("you have entered an invalid grade!");
    }
    return 0;
}