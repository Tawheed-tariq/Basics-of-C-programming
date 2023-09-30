//program to check whether date is valid or not
#include<stdio.h>
int d, m, y;
int flag = 1, isleap = 0;
int valid_date(int d,int m,int y)
{
    if(y%4 == 0 || (y%100 == 0 && y%400 == 0))
        isleap = 1;
    if(y <= 1850 || y > 2050)
        flag = 0;
    else if(m < 1 || m > 12)
        flag = 0;
    else if(d < 1)
        flag = 0;
    else if(m == 2)
    {
        if(d > 28)
            flag = 0;
        if(d == 29 && isleap)
            flag = 1;
    }
    else if(m == 4 || m == 6 || m == 9 || m == 11)
    {
        if(d > 30)
            flag = 0;
    }
    else if(d > 31)
        flag = 0;
    return flag;
}
main()
{
    printf("Enter date(dd/mm/yyyy): ");
    scanf("%d/%d/%d", &d, &m, &y);
    if(valid_date(d,m,y) == 1)
        printf("It is a valid date");
    else
        printf("It is not a valid date");
}