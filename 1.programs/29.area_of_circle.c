//program to calculate area of circle
#include<stdio.h>
#define PI 3.14
int main()
{
    float area, radius;
    printf("Enter the radius: ");
    scanf("%f", &radius);
    area = PI * radius*radius;
    printf("Area of circle is : %f\n", area);
    return 0;
}