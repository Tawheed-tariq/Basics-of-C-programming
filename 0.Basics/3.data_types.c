#include<stdio.h>
#include<stdlib.h>
int main()
{
    int age = 18.8;
    char grade = 'C';
    char name[] = "Sherif";
    float answer = 57.9;
    double answer2 = 16.3;
    printf("Once %s was doing some numerical type questions in physics, %s solved a numerical type question and gets an answer of %f, but the answer that %s got was wrong, the right answer was %f.\n", name, name, answer2, name, answer);
    printf("Now it was result day and %s came to see his result.\n", name);
    printf("%s got a garde %c in his result.\n", name, grade);
    printf("Then principal asked to %s his age, %s answered\" my age is %d\".", name, name, age);
    return 0;
}
