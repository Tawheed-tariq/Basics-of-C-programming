#include<stdio.h>
#include<stdlib.h>
int main()
{
    int set[3] = {3, 4, 6};
    int *ptr = &set[1];
    //If we write "ptr++" here then it will print the value at index 2 of array.
    printf("%d", *ptr);
    return 0;
}
