//explicit type conversion
#include<stdio.h>

int main()
{
   int a, b;
   float c, d;
   printf("Enter the value of a and b: ");
   scanf("%d\n%d", &a, &b);
   d =  (float)a/b;
   printf("The precise value of a/b is %f", d);
   return 0;
}