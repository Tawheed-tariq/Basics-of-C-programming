//Write a program to check largest of 3 numbers using nested if else.
#include<stdio.h>

int main()
{
   int num_1, num_2, num_3, l_num;
   printf("Enter the 3 numbers: ");
   scanf("%d\n%d\n%d", &num_1, &num_2, &num_3);
   if(num_1 > num_2)
   {
      if(num_1 > num_3)
      {l_num = num_1; }
      else
      { l_num = num_3;}
   }
   else
   {
      if(num_2 > num_3)
      {l_num = num_2; }
      else
      {l_num = num_3;}
   }
   printf("%d is the largest number\n", l_num);
   return 0;
}