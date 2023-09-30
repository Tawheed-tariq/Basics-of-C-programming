#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
    int *ptr , n, data, pos, i;
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
    for(i = 0;i < n; i++){
        scanf(" %d", ptr+i);
    }}
    //display
    printf("ELEMENTS OF ARRAY ARE----------------------------------");
    for( i = 0; i <n ; i++){
        printf("%d\t", *(ptr + i));
    }
//Insertion
    printf("\nEnter element to be inserted: ");
    scanf("%d", &data);
    printf("\nEnter the position at which element is entered: ");
    scanf("%d", &pos);
    if(pos == n)
        printf("Array overflow");
    else {
        for(i=n-1; i>= pos -1; i--){
            *(ptr + (i+1)) = *(ptr + i);
        }
        *(ptr + (pos - 1)) = data;
    }
    //display
    printf("ELEMENTS OF ARRAY ARE----------------------------------");
    for( i = 0; i <n ; i++){
        printf("%d\t", *(ptr + i));
    }
    return 0;
}

