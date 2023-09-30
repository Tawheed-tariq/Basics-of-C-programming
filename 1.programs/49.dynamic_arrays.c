//dynamic arrays
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,n,i;
    printf("Enter the number of elements of array: ");
    scanf("%d", &n);
    ptr = (int *)malloc(n*sizeof(int));
    if(ptr == NULL)
    {
        printf("NO memory");
        return 1;
    }
    else
    {
        printf("ENter elements: ");
        for(i = 0;i<n;i++)
        {
            scanf("%d", ptr + i);
        }
        printf("Elements are: ");
        for(i = 0;i<n;i++)
        {
            printf("%d\t", *(ptr+i));
        }  
    }
    return 0;
}