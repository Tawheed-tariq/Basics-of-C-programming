//writing even odd program using goto statement
#include<stdio.h>
main()
{

    int num;
        printf("Enter the number :");
        scanf("%d", &num);
        if(num % 2 == 0)
        goto even;
        else
            goto odd;
        even :
            printf("Number is even\n");
            goto end;
        odd:
            printf("number is odd\n");
            goto end;
        end :
             printf("\n");


}