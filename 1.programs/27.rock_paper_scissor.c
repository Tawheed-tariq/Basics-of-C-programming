#include<stdio.h>
#include<time.h>
#include<ctype.h>
#include<stdlib.h>
//global variable decleration , so that our variables are recognized by all functions
int n, i = 0;
char player, computer,loop ;
void player_choice();
void computer_choice();
//function 1 >>> this function prints whether user has won or lost the game
int game(char player, char computer)
{
    if(islower(player)) //if input is lowercase
        {if(computer == player)
            printf("\n\tTie!");
         else if (computer == 'r' && player == 'p')
            printf("\n\tYou won!");
         else if(computer == 'r' && player == 's')
            printf("\n\tYou loose!");
         else if(computer == 'p' && player == 'r')
            printf("\n\tYou loose!");
         else if(computer == 'p' && player == 's')
            printf("\n\tYou won!");
         else if(computer == 's' && player == 'r')
            printf("\n\tYou won!");
         else if(computer == 's' && player == 'p')
            printf("\n\tYou loose");
         else
            printf("Invalid entry");
        }

    else
        printf("Enter lower case letter");
    return 0;
}
//function 2 >>> prints the choice player has selected
void player_choice()
{
    if(islower(player))
        {if(player == 'r')
            printf("your choice = Rock!\t\t");
         else if(player == 'p')
            printf("Your choice = Paper!\t\t");
         else if(player == 's')
            printf("Your choice = Scissor\t\t");
         else
            printf("Invalid entry");
    }
    else
        printf("Enter lowercase letter");
}
//function 3 >>> prints the choice computer has selected
void computer_choice()
{
    if(n <= 10)
        printf("computer choice = Rock\n\n");
    else if(n > 10 && n <= 20)
        printf("computer choice = Paper\n\n");
    else if(n > 20 &&n <= 30)
        printf("computer choice  = scissor\n\n");
}
//function 4 >>> main function
int main()
{
    printf("Let`s play rock paper scissor");
    while(i == 0)
   {
    srand(time(0));
    n = rand() % 30; // picks a random number between 0 and 30
    if(n <= 10)         // here we use probability
        computer = 'r';
    else if(n > 10 && n <= 20)
        computer = 'p';
    else if(n > 20 && n <= 30)
        computer = 's';


    printf("\n\nEnter 'r' for rock, 'p' for paper, 's' for scissor");
    printf("\n\n\tyour choice: ");
    scanf(" %c", &player);
    player_choice(); //use of function 2
    computer_choice(); //use of function 3
       game(player, computer); //use of function 1
       printf("\n\nTo play once more press 'c', else press any other: ");
       scanf(" %c", &loop);
       if(loop == 'c')
            {printf("\n\n\t\t************************************");
            continue;}   //if player prints 'c' then he can play game once more
            
       else
        i = 1; // loop ends
    
   }
   return 0;
}