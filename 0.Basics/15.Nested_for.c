#include<stdio.h>
#include<stdio.h>
int main()
{
    int i,j;
    for(i = 1; i <= 4; i++)
    {
        printf("i = %d\n\n", i);
        for(j = 1; j<= 5; j++)
        {
            printf("j = %d\t", j);
        }
            printf("\n\n");
    }
    return 0;
}