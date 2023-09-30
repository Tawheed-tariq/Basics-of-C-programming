#include<stdio.h>
main()
{
    float p_amount, roi, time_period, si;
    printf("Enter the principal amount: ");
    scanf("%f", &p_amount);
    printf("\nEnter the rate of intrest: ");
    scanf("%f", &roi);
    printf("\nEnter time period in years: ");
    scanf("%f", &time_period);
    si = (p_amount * roi * time_period)/100;
    printf("\nSimple intrest for amount %.2f = %.2f", p_amount, si);
}