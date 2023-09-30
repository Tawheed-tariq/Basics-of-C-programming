#include<stdio.h>
int main()
{
    int arr[5], *arrp[5];
    for(int i = 0; i<5;i++)
    {
        printf("Enter array element %d: ",i);
        scanf("%d", arr+i);
        arrp[i] = (arr+i);
    }
    for(int j = 0; j<5; j++)
    {
        printf("The address of arr[%d] = %p\n", j,arrp[j]);
        printf("The value of arr[%d] = %d\n\n\n", j, *arrp[j]);
    }
    return 0;
}