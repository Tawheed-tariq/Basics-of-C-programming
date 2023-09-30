//count the digits of a number
#include<stdio.h>
int main()
{
    int num, count = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    do
    {
     num = num / 10;
     count++;
    }
    while(num > 0);
    printf("The number of digits in number is %d\n", count);
    return 0;
}