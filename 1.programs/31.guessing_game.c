#include<stdio.h>
int main()
{
    int fav_num = 7;
    int count, guess;
    for(count = 1; count <= 5; count++)
    {
        printf("Guess the number: ");
        scanf("%d", &guess);
        if(guess == fav_num)
        {
            printf("sibgat mera 9th chat complete kre gii\n");
            break;
        }
        else
        {
            printf("wrong guess, your guess count is now %d\n", 5- count);

        }
    }
    printf("Hence, hisaab barabar\n(loop khatam)");
    return 0;
}