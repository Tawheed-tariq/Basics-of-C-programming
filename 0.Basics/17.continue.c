#include<stdio.h>
int main()
{
    int num;
    for (num = 1 ;num <5; num++)
    {
        if(num ==2)
        {printf("understood use of continue\n");
        continue;}
        printf("Number = %d\n", num);
    }
    printf("Out of loop");
    return 0;
}