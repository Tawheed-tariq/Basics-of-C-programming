#include<stdio.h>
#define Row 2
#define Col 3
int main()
{
    int mat1[Row][Col],mat2[Row][Col],add_mat[Row][Col];
    printf("Enter elements of matrix 1: ");
    for(int i = 0; i<Row;i++)
    {
        for(int j = 0; j< Col; j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("Enter elements of matrix 2: ");
    for(int i = 0; i<Row;i++)
    {
        for(int j = 0; j< Col; j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }
    for(int i = 0; i<Row;i++)
    {
        for(int j = 0; j< Col; j++)
        {
            add_mat[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    for(int i = 0; i<Row;i++)
    {
        for(int j = 0; j< Col; j++)
        {
            printf("%d\t", add_mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}