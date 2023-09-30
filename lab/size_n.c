#include<stdio.h>
int main(){
    int arr1[1000], arr[100] = 0,i,j;
    for(i=0;i<1000;i++){
        scanf("%d", (arr1+i));
    }
    for(i=0; i<1000;i++){
        arr[arr1[i]]++;
    }
    for(i=0; i<100 ; i++){
        printf("\n%d\t",arr[i]);
    }
}