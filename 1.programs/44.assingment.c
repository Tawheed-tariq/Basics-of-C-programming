//program to print prime numbers in range num1 to num2
#include<stdio.h>
void print_prime(int);
void primes(int,int);
int main()
{
    int num_1 ,num_2 ;
    printf("Enter two numbers: ");
    scanf("%d%d",&num_1,&num_2);
    primes(num_1,num_2);
    return 0;
}
void primes(int num1, int num2)
{
    while (num1 <= num2) {
        print_prime(num1);
        num1++;
    }
}
void print_prime(int num1)
{
    int count = 0;
        for(int i = 1;i <= num1;i++)
        {
            if(num1%i == 0)
            count++;
        }
        if(count == 2)
        printf("%d\t", num1);
}