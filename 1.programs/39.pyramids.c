#include<stdio.h>
void pyramid();
void pyramid_1();
void num_pyramid_1();
void num_pyramid_2();
void num_pyramid_3();
void num_pyramid_4();
void num_pyramid_5();
//run only one function at one time
int main()
{
    pyramid_1();
    return 0;
}



void pyramid()
{
    int i , j, rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for(i = 1; i <= rows; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
void pyramid_1()
{
    int i , j, rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for(i = 0; i< rows; i++){
        for(j = 0; j< rows-i-1; j++){
            printf("* ");
        }
        printf("\n");
    }
}

//output will be like
//    *
//    * *
//    * * *
//    * * * *  
void num_pyramid_1()
{
    int i , j, rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for(i = 1; i <= rows; i++)
    {
        for(j = 1; j <= i ; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}
//output will be like
//   1
//   1 2
//   1 2 3
//   1 2 3 4
void num_pyramid_2()
{
    int i , j, rows, a = 0;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for(i = 1; i<= rows; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d ", a+i);
        }
        printf("\n");
    }

}
//output will be like
//   1
//   2 2
//   3 3 3
//   4 4 4 4
void num_pyramid_3()
{
    int i , j, rows, a = 0;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for(i = 1; i <= rows; i++)
    {
        for(j = 0; j < i; j++)
        {
            printf("%d ", i+j);
        }

        printf("\n");
    }

}
//output will be like
//   1
//   2 3
//   3 4 5
//   4 5 6 7
void num_pyramid_4()
{
    int i , j, rows, a = 1;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for(i = 1; i <= rows; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d ", a);
            a += 1;
        }
        printf("\n");
    }
}
//output will be like
//   1
//   2 3
//   4 5 6
//   7 8 9 10
void num_pyramid_5()
{
    int i , j, rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for(i = rows; i > 0 ; i--)
    {
        for(j = rows; j >= i; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}
//output will be like
//   5             if rows = 5
//   5 4
//   5 4 3
//   5 4 3 2