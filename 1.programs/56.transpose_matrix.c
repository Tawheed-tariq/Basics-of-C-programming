#include<stdio.h>
#define Row 2
#define Col 3
#define Row1 Col
#define Col1 Row
void transpose(int arr[Row][Col], int arr_t[Row1][Col1])
{
    for(int i = 0; i< Row1; i++)
    {
        for(int j = 0; j<Col1; j++)
        {
            arr_t[i][j] = arr[j][i];
        }
    }

}
int main()
{
    int arr[Row][Col] = {{2,4,5},
                         {3, 6, 8}},
                          arr_t[Row1][Col1];
    transpose(arr, arr_t);
    for(int i = 0; i< Row1; i++)
    {
        for(int j = 0; j< Col1; j++)
        {
            printf("%d\t", arr_t[i][j]);
        }
        printf("\n");
    }
    return 0;
}