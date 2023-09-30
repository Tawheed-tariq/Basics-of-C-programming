#include<stdio.h>
int main(){
    int arr[3][3], sum =0 , i, j, k =0;
     for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d", &arr[i][j]);
        }}
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(k==0)
            {sum += arr[i][j];
            k++;}
            else 
            k = 0;
        }
    }
    printf("\nsum = %d", sum);
}