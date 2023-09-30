#include<stdio.h>
int main()
{
  int num_1, num_2, max;
  printf("Enter the value of two numbers: ");
  scanf("%d%d", &num_1, &num_2);
  max = (num_1>num_2) ? num_1:num_2;
  printf("%d is maximum between %d and %d", max, num_1,num_2);
return 0;
}