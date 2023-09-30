#include<stdio.h>

int  main(){
    int per;
    printf("ENter your percetage: ");
    scanf("%d", &per);
    if(per > 75)
    printf("\nDistinction");
    else if(per >60)
    printf("\nGrade = A");
    else if(per > 50)
    printf("\nGrade = B");
    else if(per > 40)
    printf("\nGrade = C");
    else
     printf("\nYou are fail");
}