#include<stdio.h>

int main(){
    float cp,bee,maths,english,ed,total,percent;
    char grade;
    printf("Enter the marks obtained in BEE: ");
    scanf("%f", &bee);
    printf("Enter the marks obtained in maths: ");
    scanf("%f", &maths);
    printf("Enter the marks obtained in computer programming: ");
    scanf("%f", &cp);
    printf("Enter the marks obtained in english: ");
    scanf("%f", &english);
    printf("Enter the marks obtained in drawing: ");
    scanf("%f", &ed);
    total=cp+bee+maths+english+ed;
    percent=(total/500)*100;
    if (percent>=90)
    {
        grade='A';
    }
    else if (percent >=75)
    {
        grade='B';
    }
    else if (percent >=60)
    {
        grade='C';
    }
    else if (percent >=40)
    {
        grade='D';
    }
    else{
        grade='F';
    }
    printf("Your grade is %c \n",grade);
    return 0;
}