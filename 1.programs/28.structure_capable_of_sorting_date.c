#include<stdio.h>

typedef struct date
{
    int date;
    int month;
    int year;
}date;
int main()
{
    date d = {12, 11, 2022};
    printf("The date is %d/%d/%d", d.date, d.month, d.year);
    return 0;
}