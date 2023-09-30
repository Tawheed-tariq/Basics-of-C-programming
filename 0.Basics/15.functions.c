#include<stdio.h>
#include<stdlib.h>
void fnc1(char name[], int age, char grade)
{
    printf("Hello %s, your age is %d and your grade is %c.\n", name, age, grade);
}

int main()
{

    fnc1("Tawheed", 18, 'A');
    return 0;
}

