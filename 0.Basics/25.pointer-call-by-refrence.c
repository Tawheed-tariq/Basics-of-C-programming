#include <stdio.h>

// The input will contain two integers, a and , b separated by a newline.
// Modify the two values in place and the code stub main() will print their values. 
// a` = a + b
// b` = |a - b|

void update(int *a,int *b) {
    // Complete this function
    *a = *a + *b;
    if(*a > 2*(*b))
    *b = *a - 2*(*b);
    else
    *b = 2*(*b) - *a;
     
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}