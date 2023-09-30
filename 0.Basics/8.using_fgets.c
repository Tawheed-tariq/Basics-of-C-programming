#include<stdio.h>
main()
{

    char name[20];
    printf("Using gets\n");
    printf("Enter your name: "); 
    gets(name);
    puts(name);
    printf("\n\n");
    printf("Using fgets\n");
    printf("Enter your name: ");
    fgets(name, 20, stdin);
    printf("Your name is %s\n", name);
}