//program to calculate sum of digits of a number
#include<stdio.h>
int sum_of_digits(int);
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("The sum of digits of %d is %d\n",num, sum_of_digits(num));
    return 0;
}
int sum_of_digits(int num)
{
    int sum = 0, rem;
    while(num > 0)
    {
        rem = num % 10; //taking the last digit of number
        sum += rem;
        num = num / 10; //skipping the last digit
    }
    return sum;
}