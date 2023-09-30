//example of struct
#include<stdio.h>
#include<string.h>
typedef struct student
{
    char name[20];
    int roll_no;
    float marks;
}st;
int main()
{
    st stu1={"muskaan",8,27.3},stu2,stu3;
    strcpy(stu2.name,stu1.name);
    printf("Enter student 2 rollno: ");
    scanf("%d",&stu2.roll_no);
    printf("Enter student 2 marks: ");
    scanf(" %f",&stu2.marks);
    printf("Enter student 3 name,roll number and marks:");
    scanf(" %s%d%f",stu3.name,&stu3.roll_no,&stu3.marks);
    printf("student 1:\nname = %s\troll number = %d\tmarks = %f\n",stu1.name,stu1.roll_no,stu1.marks);
    printf("student 2:\nname = %s\troll number = %d\tmarks = %f\n",stu2.name,stu2.roll_no,stu2.marks);
    printf("student 3:\nname = %s\troll number = %d\tmarks = %f\n",stu3.name,stu3.roll_no,stu3.marks);
    return 0;
}