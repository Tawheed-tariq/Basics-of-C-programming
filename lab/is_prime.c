#include<stdio.h>
int is_prime(int);
int main()
{
    int num, i = 2,output;
    printf("Enter the number: ");
    scanf("%d", &num);
    if(is_prime(num))
    printf("prime\n");
    else
     printf("not prime\n");
}
int is_prime(int num){
  int prime = 1;
    for(int i = 2;i<num;i++)
    {
      if(num%i==0)
      prime = 0;
    }
    return prime;
}