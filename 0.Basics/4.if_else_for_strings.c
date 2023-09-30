#include<stdio.h>
#include<string.h>

int main()
{
    char name[20];
    printf("Enter name : ");
    scanf("%s", name);
    if (!strcmp(name, "Tawheed"))
    {
        printf("Your name is Tawheed");

    }
    else if (!strcmp(name, "Tafseera"))
    {
        printf("Your name is Tafseera");
    }
    else
    {
        printf("Invalid entry");
    }
    return 0;
}