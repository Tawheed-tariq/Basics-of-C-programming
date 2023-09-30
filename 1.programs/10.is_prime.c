//program to check whether a number is prime or not
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


//program for prime number
// #include<stdio.h>
// int main()
// {
//   int num, count = 0;
//   printf("Enter the number: ");
//   scanf("%d", &num);
//   for(int i = 1; i<= num; i++)
//   {
//     if(num %i == 0)
//     count++;
//   }
//   if(count == 2)
//   printf("%d is prime", num);
//   else
//   printf("%d is not prime", num);
// return 0;
// }
