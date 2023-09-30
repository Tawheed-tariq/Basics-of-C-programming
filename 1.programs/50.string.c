#include<stdio.h>
int main()
{
    char str[] = "chhavi sarswat";
     for(int i =0 ; str[i]!= '\0'; i++)
     {
        printf("value of str[%d]= %c\n",i , *(str+i));
         
        printf("address of str[%d] = %p\n", i , str+i);
     }

     return 0 ;
}