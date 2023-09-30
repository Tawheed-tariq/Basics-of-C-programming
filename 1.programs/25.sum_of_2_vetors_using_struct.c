#include<stdio.h>

typedef struct vector
{
    int x;
    int y;
}vector;

vector sumvector(vector v1, vector v2)
{
    vector result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    printf("The x dim of vector is %d and y is %d", result.x, result.y);
    return result;

}

int main()
{
    vector v1, v2;
    v1.x = 2;
    v1.y = 3;
    v2.x = 4;
    v2.y = 6;
    sumvector(v1, v2);
    return 0;
}