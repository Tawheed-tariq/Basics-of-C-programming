#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float root1,root2,d;
    printf("ENter the cofficients a, b, c of (ax^2 + bx + c): ");
    scanf("%d%d%d",&a,&b,&c);
    d = b*b - 4*a*c;
    if(d>=0)
    {
        root1 = (float)((-b+sqrt(d))/(2*a));
        root2 = (float)((-b-sqrt(d))/(2*a));
        printf("The two roots are\nx=%.2f, %.2f",root1,root2);
    }
    else {
    printf("Roots are imaginary");
    }    
    return 0;
}