#include<stdio.h>
struct student{
        char student_branch[20];
        char student_name[20];
        int roll_number;
    };
struct college{
    char college_name[60];
    char college_address[40];
    struct student stu;
};

int main()
{
    struct college col;
    printf("%lu\n",sizeof(col));
    printf("Enter student name: ");
    scanf("%s",col.stu.student_name);
    printf("%s",col.stu.student_name);
    printf("Enter college name: ");
    scanf("%s",col.college_name);
    printf("%s",col.college_name);
    return 0;
}
// struct college{
//     char college_name[60];
//     char college_address[40];
//     struct student{
//         char student_branch[20];
//         char student_name[20];
//         int roll_number;
//     }stu;
// };
