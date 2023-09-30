//program to return more than one value from function
#include<stdio.h>
#include<math.h>
void fnc(int,int,int *, int *, int *,float *,int *);
int main()
{
    int a,b,sum,diff,mul,power;
    float div=0;
    printf("Enter two numbers: ");
    scanf("%d%d", &a,&b);
    fnc(a,b,&sum,&diff,&mul,&div,&power);
printf("sum = %d\ndiff = %d\nmul = %d\ndiv=%f\npower = %d\n",sum,diff,mul,div,power);
    return 0;
}
void fnc(int a,int b,int *sum,int *diff,int *mul,float *div,int *power)
{
    *sum = a + b;
    *diff = a - b;
    *mul = a*b;
    if(!b)
    {*div = (float)a/b;}
    *power = pow(a,b);
}