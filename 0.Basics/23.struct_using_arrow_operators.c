#include<stdio.h>
#include<string.h>
typedef struct employee
{
    int code;
    int salary;
    char name[20];
}emp;

int main()
{
    emp e1;
    e1.code = 30;
    e1.salary = 3409;
    strcpy(e1.name, "Jhon");
    emp *ptr;
    ptr = &e1;
    //Here we are using arrow operator in place of
    //printf("%d\n", (*ptr).code);
    printf("%d\n", ptr->code);
    printf("%d\n%s\n", ptr->salary, ptr->name);
    return 0;
}