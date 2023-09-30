#include<stdio.h>
#include<stdlib.h>
int main()
{

    double num1;
    double num2;
    printf("Enter number 1: ");
    scanf("%lf", &num1);
    printf("Enter number 2: ");
    scanf("%lf", &num2);

    printf("Answer1: %f\n", num1*num2);

    int num3;
    int num4;
    printf("Enter 3rd number: ");
    scanf("%d", &num3);
    printf("Enter 4th number: ");
    scanf("%d", &num4);

    printf("Answer2 : %d\n", num3*num4);

    double num5;
    double num6;
    printf("Enter 5th number: ");
    scanf("%lf", &num5);
    printf("Enter 6th number: ");
    scanf("%lf", &num6);

    printf("Answer3: %f\n", num5 + num6);

    int num7;
    int num8;
    printf("Enter number 7: ");
    scanf("%d", &num7);
    printf("Enter number 8: ");
    scanf("%d", &num8);

    printf("Answer4: %d\n", num7/num8);



    return 0;
    }