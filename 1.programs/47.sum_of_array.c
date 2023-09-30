#include<stdio.h>
int main()
{
    int arr[5],i,sum = 0;
    printf("ENter elements of array");
    for(i=0;i<5;i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i<5;i++)
    {
        sum+=arr[i];
    }
    printf("sum of elements of array is %d", sum);
    return 0;
}