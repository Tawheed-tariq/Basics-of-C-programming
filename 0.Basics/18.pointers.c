#include<stdio.h>

int main()
{
    int i = 20;
    int *j = &i;
    int **k = &j;
    printf("The address of i is %p\n", j);
    printf("The value of i is %d\n", *j);
    printf("The value of j is %p\n",j);
    printf("The value of i is %d\n", *j);
    printf("The address of j is %p\n", k );
    return 0;
}