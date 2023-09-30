#include<stdio.h>
int main()
{
    int arr1[4],arr2[5],arr3[9],i;
    printf("Enter elements of arr1: ");
    for(int i = 0; i<4;i++)
    {
        scanf("%d",arr1+i);
    }
    printf("Enter elements of arr2: ");
    for(int i = 0; i<5;i++)
    {
        scanf("%d",arr2+i);
    }
    for( i = 0; i<4; i++)
    {
        arr3[i] = arr1[i];   
    }
    printf("%d", i);
    for(; i<9; i++)
    {
        arr3[i] = arr2[i-4];   
    }
    printf("Merged array elements are: ");
    for(i=0; i<9; i++)
    {
         printf("%d\t",arr3[i]);  
    }
    return 0;
}
