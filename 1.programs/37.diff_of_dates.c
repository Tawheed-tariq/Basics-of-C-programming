#include<stdio.h>
int d_1,d_2,m_1,m_2,y_2,y_1;
int flag = 1, isleap = 0;
int d,m,y;

int valid_date(int d,int m,int y)
{
    if(y%4 == 0 || (y%100 == 0 && y%400 == 0))
        isleap = 1;
    if(m < 1 || m > 12)
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

void greater_is_y2()
{
    if(y_2 > y_1)
    {
        if(d_2 < d_1)
        {
            if(m_2 == 3)
            {
                if(y_2 % 4 == 0 || (y_2 %100 ==0 && y_2 % 400 == 0))
                    d_2 += 29;
                else
                    d_2 += 28;
            }
            else if(m_2 == 5 || m_2 == 7 || m_2 == 10 || m_2 == 12)
                d_2 += 30;
            else
                d_2 += 31;
            m_2 -= 1;
        }
        if(m_2 < m_1)
        {
            m_2 += 12;
            y_2 -= 1;
        }
        d = d_2 - d_1;
        m = m_2 - m_1;
        y = y_2 - y_1;
    }
}

void greater_is_y1()
{
    if(y_1 > y_2)
    {
        if(d_1 < d_2)
        {
            if(m_1 == 3)
            {
                if(y_1 % 4 == 0 ||(y_1 % 100 == 0 && y_1 % 400 == 0))
                    d_1 += 29;
                else d_1 += 28;
            }
            else if(m_1 == 5 || m_1 == 7 || m_1 == 10 || m_1 == 12)
                d_1 += 30;
            else d_1 += 31;
        }
        if(m_1 < m_2)
        {
            m_1 += 12;
            y_1 -= 1;
        }

        d = d_1 - d_2;
        m = m_1 - m_2;
        y = y_1 - y_2;
    }
}

main()
{
    printf("\nEnter first date(dd/mm/yyyy): ");
    scanf("%d/%d/%d", &d_1,&m_1, &y_1);
    valid_date(d_1,m_1,y_1);
    printf("\nEnter second date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &d_2, &m_2, &y_2);
    valid_date(d_2,m_2,y_2);
    if(valid_date(d_1,m_1,y_1) == 1 && valid_date(d_2,m_2,y_2) == 1)
       {
         greater_is_y2();
         greater_is_y1();
         printf("Difference between dates entered is\n %u years %u months %u days", y , m, d);
       }
    else printf("Enter a valid date\n");
}