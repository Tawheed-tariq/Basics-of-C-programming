//swap two using call by refrence
#include<stdio.h>
void swap(int *,int *);
void swap_two(int,int);
int main()
{
    int a,b,temp;
    printf("enter the value of a & b: ");
    scanf("%d %d",&a,&b);
    printf("a = %d , b = %d\n\n",a,b);
    swap(&a,&b);
    printf("a = %d , b = %d\n\n",a,b);
    return 0;
}
void swap(int *a,int *b)
{
    int  temp= *a;
    *a= *b;
    *b=temp;
    printf("a = %d , b = %d\n\n",*a,*b);
}
void swap_two(int a,int b)
{
    int temp = a;
    a = b;
    b = temp;
    printf("a = %d , b = %d\n\n",a,b);    
}