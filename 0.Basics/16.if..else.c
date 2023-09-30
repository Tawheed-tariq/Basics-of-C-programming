
#include<stdio.h>
#include<stdlib.h>

int fnc(int num1, int num2, int num3, int num4){
    int result;
    if(num1 >= num2 && num1 >= num3 && num1 >= num4)
   {
       result = num1;
   }
    else if (num2 >= num1 && num2 >= num3 && num2 >= num4)
   {
       result = num2;
   }
    else if (num3 >= num1 && num3 >=num2 && num3 >= num4) {result = num3;}
    else{result = num4;}
   return result;
   }

int main()
{
   printf("%d", fnc(18, 22, 3, 56));
   return 0;
}