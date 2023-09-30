#include<stdio.h>

int main()
{
    int num = 1, sum = 0, n;
    printf("Enter number of natural numbers to be printed: ");
    scanf("%d", &n);
    while(num <= n)
    {
            printf("%d\t", num);
            num++;
    }
    printf("\n");
    return 0;
}
