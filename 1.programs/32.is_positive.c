#include<stdio.h>
main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    if(num < 0)
        printf("%d is negative", num);
    else if (num >= 0)
        printf("%d is positive", num);
    else printf("Invalid entry");
}