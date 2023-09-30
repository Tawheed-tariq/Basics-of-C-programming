//Program to print multiplication table of 2, 3, 4 using functions.
#include<stdio.h>

int table(int num, int level)
{
    int mul[3][10];
    int i;
    printf("The multiplication table of %d is :\n", num);
    for (i =1; i <=10; i++)
    {
        printf("%d * %d = %d\n", num, i, level * i);
    }
    printf("*******************************\n");
}
int main()
{

    table(2, 0);
    printf("\n");
    table(3, 1);
    printf("\n");
    table(4, 2);
    printf("\n");

    return 0;
}