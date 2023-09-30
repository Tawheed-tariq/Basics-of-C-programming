//array carrying 10 integers in which we store multiplication table of 5.
#include<stdio.h>

int main()
{
    int set[10];
    int i;
    for (i = 1; i <= 10; i++)
    {
        set[i] = 5*(i);
    }
    for(i = 1; i <= 10; i++)
    {
        printf("5 * %d = %d\n", i, set[i]);
    }
    return 0;
}