//program for calculating area of a circle

#include<stdio.h>
#include<math.h>
#define PI 3.142 // this function is used to give any variable a value, so that it can be used anyhere
int main()
{
    int r;
    float area;
    printf("Enter the radius: \n");
    scanf("%d", &r);
    area = PI * pow(r, 2);// here for power function we are using math.h header file
    printf("Area of circle is %.2f", area);//here %.2f gives a floating point number with only 2 digits after decimal point
    return 0;
}