//program to reverse elements of array
#include <stdio.h>
#include <stdlib.h>
#define n 6
int main(){
    int arr[n],temp;
    printf("Enter elements of array: ");
    for(int i = 0; i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i<n/2; i++){
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    for(int i = 0; i < n; i++){
        printf("%d\t", arr[i]);
    }
    return 0;
}