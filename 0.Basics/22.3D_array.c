//Program to create a 3D array and print the address of its elements.
#include<stdio.h>

int main()
{
    int set[2][3][4];
    int i, j, k;
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 3; j++)
        {
           for (k = 0; k <= 4; k++)
           {
               printf("The address of set[%d][%d][%d] is %u\n ", i, j, k, &set[i][j][k]);
           }
        }
    }
    return 0;
}