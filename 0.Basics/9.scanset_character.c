// #include<stdio.h>

// int main()
// {
//     char name[20];

//     //with scanset character
//     printf("\n\nusing scanset character to take input\n");
//     printf("Enter your name: ");
//     scanf(" %[^\n]s", name); //here until the input is not tab scanf takes input.
//     printf("Your name is %s\n\n\n", name);


//     //without scanset character
//     printf("Taking input without scanset character\n");
//     printf("Enter your name: ");
//     scanf("%s", name);
//     printf("Your name is %s\n", name);


//     return 0;
// }
#include<stdio.h>
int *func(int *);
int main()
{
    int i = 35, *z;
    z = func(&i);
    printf("%u\n",*z);
    return 0;
}
int *func(int *m)
{
    return (m+2);
}