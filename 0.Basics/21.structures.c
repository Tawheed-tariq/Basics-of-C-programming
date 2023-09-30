//structure is used to create new datatypes.
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
    emp e1, e2;
    e1.code = 12;
    e1.salary = 75000;
    strcpy(e1.name, "Jhon");
    printf(" %d\t %d\t %s\n", e1.code, e1.salary, e1.name);
    e2.code = 34;
    e2.salary = 35000;
    strcpy(e2.name, "Harry");
    printf(" %d\t %d\t %s\n", e2.code, e2.salary, e2.name);
    return 0;
}
