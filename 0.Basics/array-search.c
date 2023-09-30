#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
    int *ptr , n, count = 0, i, search;
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

//searching
    printf("\nEnter element to search: ");
    scanf("%d", &search);
    for(i = 0; i<n; i++){
        if(search == *(ptr+i)){
            printf("Element is present at position %d ", i);
            count++;
        }
    }
    if(count == 0)
    printf("Elment not present");
    return 0;
}

