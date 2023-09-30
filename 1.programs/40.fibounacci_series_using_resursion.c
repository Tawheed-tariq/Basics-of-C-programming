#include<stdio.h>
int fib(int term);
int main()
{
  int n;
  printf("Enter the number of terms: ");
  scanf("%d", &n);
  for(int i = 1; i <= n; i++)
  {
    printf("%d  ", fib(i));
  }
  printf("\n");
  return 0;
}
int fib(int term)
{
  if(term == 1)
    return (0);
  else if(term == 2)
    return (1);
  else 
    return (fib(term - 2) + fib(term - 1));
}