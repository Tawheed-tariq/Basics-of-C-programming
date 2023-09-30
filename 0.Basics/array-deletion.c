#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
    int *ptr , n, pos, i;
    printf("Enter the size of array: ");
    scanf(" %d", &n);
    ptr = (int *)malloc(n*sizeof(int));
    if(ptr == NULL)
    {
        printf("NO memory");
        return 1;
    }
    else{
    printf("Enter elements of array: ");
    for(i = 0; i < n; i++){
        scanf(" %d", ptr+i);
    }}
    //display
    printf("ELEMENTS OF ARRAY ARE----------------------------------");
    for( i = 0; i <n ; i++){
        printf("%d\t", *(ptr + i));
    }
//Deletion
    printf("\nEnter the position of element to be deleted: ");
    scanf("%d", &pos);
    for(i = pos-1; i < n; i++){
        *(ptr + i) = *(ptr +(i+1));
    }
    n = n-1;
    //display
    printf("ELEMENTS OF ARRAY ARE----------------------------------");
    for( i = 0; i <n ; i++){
        printf("%d\t", *(ptr + i));
    }
    return 0;
}

