//multiplication of two number without using multiply operator
#include<stdio.h>
main()
{
    int num_1, num_2, i;
    long result= 0;
    printf("Enter the numbers: ");
    scanf("%d\n%d", &num_1, &num_2);
    for (i = 1; i <= num_1; i++)
        {result += num_2;}
        printf("%d * %d = %ld", num_1, num_2, result);
}