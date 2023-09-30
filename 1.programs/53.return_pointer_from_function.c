//return pointer from function
#include<stdio.h>
int *fnc(int *,int);
int main()
{
    int arr[5] = {1,2,3,4,5};
    int n = 3, *ptr;
    ptr = fnc(arr,n);
    printf("%p\n", ptr);
    return 0;
}
int *fnc(int *p,int n)
{
    return p+n;
}