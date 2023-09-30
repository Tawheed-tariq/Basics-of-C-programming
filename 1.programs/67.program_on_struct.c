#include<stdio.h>
typedef struct ST{
    char name[30];
    int adhaar_number;
}st;
void fnc(st *);
void print(st *);
int main()
{
    st A[3];
    for(int i = 0;i<3;i++)
    {
        fnc(&A[i]);
    }
    for(int i = 0;i<3;i++)
    {
        printf("For person %d", i+1);
        print(&A[i]);
    }
    return 0;
}
void  fnc(st *person)
{
    printf("Enter name of person: ");
    scanf(" %[^\n]s", person->name);
    printf("Enter adhaar number: ");
    scanf(" %d",&person->adhaar_number);
}
void print(st *person)
{
    printf("Name = %s\n", person->name);
    printf("adhaar number = %d\n", person->adhaar_number);
}