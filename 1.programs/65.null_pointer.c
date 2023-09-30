#include<stdio.h>
int main()
{
    int *null_ptr = NULL,*ptr, num = 3;
    ptr = &num;
    if(null_ptr == NULL)
    printf("This is null pointer\n");
     if(ptr != NULL)
     printf("Value of num = %d\naddress of num = %p", *ptr, ptr);
    return 0;
}