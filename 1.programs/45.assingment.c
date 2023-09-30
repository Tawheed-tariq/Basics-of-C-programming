// 1.if two numbers are equal the hcf is any one number 
//   or if any one is greater then subtract it with smaller
//   number until they both get equal
// 2.The product of HCF of two numbers and LCM of
//   two numbers is equal to the product of two numbers.
//   Hence formula for finding LCM is:
//   LCM = product of two numbers / HCF of two

#include<stdio.h>
int hcf(int,int);
int lcm(int, int);
int main()
{
    int num1,num2;
    printf("Enter the 2 numbers: ");
    scanf("%d%d", &num1,&num2);
    printf("HCF of 2 numbers is %d\n", hcf(num1,num2));
    printf("LCm of two numbers is %d\n", lcm(num1,num2));
    return 0;
}
int hcf(int num_1, int num_2)
{
    if (num_2 == 0)
    return num_1;
    else
     return hcf(num_2,num_1%num_2);
}
int lcm(int num_1,int num_2)
{
    return (num_1*num_2/hcf(num_1, num_2));
}
