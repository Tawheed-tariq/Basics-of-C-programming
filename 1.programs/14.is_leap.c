// first check the year is centanial or not(if year is divided by 100 then it is centanial year)
// if year is centanial and is divisible by 400 then is leap
// if year is centanial and is not divisible by 400, it is not leap
// if year is not centanial and year is divisible by 4, it is leap
// if year is not centanial and year is not divisible by 4, it is not leap
// if ((year % 100 == 0 && year % 400 == 0) || year % 4 == 0) ---> leap year

//program to check year is leap or not
#include<stdio.h>
main()
{
    int year;
    printf("\nEnter the year : ");
    scanf("%d", &year);
    if (year %100 == 0)
    {
        if (year % 400 == 0)
        {
            printf("%d is a leap year\n", year);
        }
        else
            printf("%d is not a leap year\n", year);
    }
    else
    {
        if(year % 4 == 0)
            printf("%d is leap year\n", year);
        else
            printf("%d is is not leap year\n",year);
    }

}
