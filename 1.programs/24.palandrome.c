//program to check a number is palandrome or not
//palandrome number means reverse of number is same as number
//example : 1221, 5445.
#include<stdio.h>
int main()
{
    int num, sum = 0, rem, temp;
    printf("Enter the number: ");
    scanf("%d", &num);
    for(; num > 0; )
    {
        rem = num % 10;
        sum = (sum * 10) + rem;//here we have to put last digit on ones place and 2nd last on tens place
        num = num / 10;
    }
    printf("Reverse of number is %d", sum);
    return 0;
}