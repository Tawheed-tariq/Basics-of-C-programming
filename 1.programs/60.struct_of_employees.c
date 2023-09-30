#include<stdio.h>
typedef struct employee
{
    float salary;
    int age;
    char name[20];
    char address[20];
}emp;
void print(emp *);
void take_input(emp *);
int main()
{
    emp e[3];
    for(int i = 0; i <3;i++)
    {
        printf("For employee %d", i);
        take_input(&e[i]);
    }
    for(int i = 0; i <3;i++)
    {
        printf("For employee %d", i);
        print(&e[i]);
    }
    return 0;
}
void print(emp *ep)
{
    printf("The name of employee is: %s\n",ep->name);
    printf("The age of employee is: %d\n",ep->age);
    printf("The salary of employee is: %f\n",ep->salary);
    printf("The address of employee is: %s\n",ep->address);
}
void take_input(emp *ep)
{
    printf("Enter the name, age, salary and address: ");
    scanf("%s%d%f%s",ep->name,&ep->age,&ep->salary,ep->address);
}