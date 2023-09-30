//factorial of a number
#include<stdio.h>
int main()
{
    int i = 1, factorial = 1, n;
    printf("Enter the number: ");
    scanf("%d", &n);
    while (i <= n)
    {
        factorial *= i;
        i++;
    }
    printf("The factorial of %d = %d\n", n, factorial);
    return 0;
}