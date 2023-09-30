/*Program to find the sum of digits of a number until the sum is reduced to 1 digit.*/
#include<stdio.h>
main()
 {
     int sum = 0, rem;
     long num;
     printf("Enter the number: ");
     scanf("%d", &num);
     printf("%d-->", num);
     do
     {
         for(sum = 0; num != 0; num = num /10)
         {
             rem = num % 10;
             sum += rem;
         }
         printf("%d\t", sum);
         num = sum;
     }while(num / 10 != 0);
 }