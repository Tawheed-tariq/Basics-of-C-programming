//program to find number of notes required for a given amount of money
#include<stdio.h>
int main()
{
    long amount, notes, choice;
    printf("Enter the value of amount: ");      //Entered amount
    scanf("%ld", &amount);
    printf("Choose a note you want to  start with: ");   //choice for user to select from any amount.
    scanf("%ld", &choice);
    switch(choice)
    {
        default: printf("Enter only valid choices");
        case 2000:
            notes = amount / 2000;
            printf("Number of 2000 notes = %ld\n", notes);      //number of 2000 notes
            amount = amount % 2000;
        case 500:
            notes = amount / 500;
            printf("Number of 500 notes = %ld\n", notes);       //number of 500 notes
            amount = amount % 500;
        case 200:
            notes = amount / 200;
            printf("Number of 200 notes = %ld\n", notes);       //number of 200 notes
            amount = amount% 200;
        case 100:
            notes = amount / 100;
            printf("Number of 100 notes = %ld\n", notes);       //number of 100 notes
            amount = amount % 100;
        case 50:
            notes = amount / 50;
            printf("Number of 50 notes = %ld\n", notes);        //number of 50 notes
            amount = amount % 50;
        case 10:
            notes = amount / 10;
            printf("Number of 10 notes = %ld\n", notes);        //number of 10 notes
            amount = amount % 10;
        case 5:
            notes = amount / 5;
            printf("Number of 5 notes = %ld\n", notes);          //number 5 notes
            amount = amount % 5;
        case 2:
            notes = amount / 2;
            printf("Number of 2 notes = %ld\n", notes);         //number of 2 notes
            amount = amount % 2;
        case 1:
            notes = amount / 1;
            printf("Number of 1 notes = %ld\n", notes);         //number of 1 notes
    }
    printf("\n\n");
    return 0;
}