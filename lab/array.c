#include<stdio.h>
int main(){
    int arr[10], sum_all=0, count = 0, sum_even = 0, sum_odd = 0;
    printf("enter numbers: ");
    for(int i = 0; i<10;i++){
        scanf("%d", (arr+i));
    }
    for(int i = 0; i<10; i++){
        sum_all += arr[i];
        if(arr[i]%2 == 0){
            sum_even += arr[i];
            count++;
        }
        if(i%3 == 0){
            sum_odd += arr[i];
        }
    }
    printf("sum all = %d\nsum even = %d\nsum odd = %d\n", sum_all, sum_even, sum_odd);
}
