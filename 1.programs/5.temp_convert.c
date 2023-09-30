// Program to change the temperature from celcius to farehiet or from farenheit to celcius
#include<stdio.h>
int main()
{
    double T;
    char op;
    printf("Enter the temperature: ");
    scanf("%lf", &T);

    printf("\n\nEnter 'C' for celcius\n'F' for farenhiet: ");
    scanf(" %c", &op);
    if (op == 'C' )
        {printf("\n\nTemperature is %.2f farenhiet", (9/5)*T +32); }
    else if (op == 'F') {printf("\n\nTemperature is %.2f celcius", (T - 32)*5/9); }

    return 0;
}
