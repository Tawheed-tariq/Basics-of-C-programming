#include <stdio.h>
#include <stdlib.h>
#define Row 2
#define Col 3
#define Row1 Col
#define Col1 Row
void multiplymatrix(int a[Row][Col], int b[Row1][Col1], int mul[Row][Col1])
{
    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < Col1; j++)
        {
            for (int k = 0; k < Col; k++)
            {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}
int main()
{
    int arr1[Row][Col],arr2[Row1][Col1] ,mul[Row][Col1] = {0};
    printf("Enter matrix 1: ");
    for(int i = 0;i<Row;i++)
    {
        for(int j = 0;j<Col;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter matrix 2: ");
    for(int i = 0;i<Row;i++)
    {
        for(int j = 0;j<Col;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    multiplymatrix(arr1,arr2,mul);
    printf("multiplication of two matirces is\n");
    for(int i = 0; i < Row; i++)
    {
        for(int j = 0;j < Col1; j++)
        {
            printf("%d\t", mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}