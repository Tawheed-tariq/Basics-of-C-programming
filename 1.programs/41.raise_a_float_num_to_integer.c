#include<stdio.h>
#include <stdlib.h>
float power(float n, int p);
int main()
{
  float num;
  int pow;
  printf("Enter the value of floating number and power raised to it: ");
  scanf("%f\n%d", &num, &pow);
  printf("%f power %d = %f\n", num, pow, power(num, pow));
  return 0;
}
float power(float n, int p)
{
  if(p == 0)
    return 1;
  else if (p > 0)
    return (n*power(n , p-1));
}