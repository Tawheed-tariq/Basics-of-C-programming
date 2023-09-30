#include<stdio.h>
int main()
{
    int matrix[3][3] = {{3, 6, 7}, {18, 22, 67}, {43, 56, 78}};
    int i, j;
    for (i = 0; i < 3; i++){
        for(j =0; j<3; j++){
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}