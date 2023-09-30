//Program to create 5 complex numbers and taking input from the user then printing them using display function.
#include<stdio.h>
typedef struct complex_number
{
    int real;
    int complex;
}com;

void display(com c)
{
    printf("The value of real part is %d\n", c.real);
    printf("The value of complex part is %d\n", c.complex);
}

int main()
{
    int i,j;
    com c[5];
    for (i = 0; i < 5; i++)
    {
        printf("Enter the real part of c%d: ", i+1);
        scanf("%d", &c[i].real);

        printf("Enter the complex part of c%d: ", i+1);
        scanf("%d", &c[i].complex);
    }
    for (i = 0; i < 5; i++)
    {
        display(c[i]);
    }
    return 0;
}
