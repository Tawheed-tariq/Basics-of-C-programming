/*Armstrong number is a three digit number in which the sum of cube of all
 digits is equal to the number
 for example 371 is an armstrong number since
371 = 3^3 +7^3 + 1^3 = 27 + 343 + 1*/
#include<stdio.h>
int main()
{
    int num, sum = 0, cube, rem;
    printf("Enter a number: ");
    scanf("%d",&num);
            rem = num % 10;
            cube = rem * rem * rem;
            num = num / 10;
            sum += cube;
        if(num == sum)
            printf("%d is armstrong\n", num);
        else
            printf("%d is not armstrong\n", num);
    return 0;
}