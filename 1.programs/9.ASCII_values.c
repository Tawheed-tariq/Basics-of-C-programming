#include<stdio.h>
int main()
{
    char c_1, c_2, c_3, c_4, c_5;
    printf("Enter the values of c_1, c_2, c_3, c_4, c_5");
    scanf("%c\n%c\n%c\n%c\n%c", &c_1, &c_2, &c_3, &c_4, &c_5);
    printf("ASCII value of %c is %d\nASCII value of %c is %d\nASCII value of %c is %d", c_1, c_1, c_2, c_2, c_3, c_3);
    printf("\nASCII value of %c is %d\nASCII value of %c is %d", c_4, c_4, c_5, c_5);
    return 0;
}