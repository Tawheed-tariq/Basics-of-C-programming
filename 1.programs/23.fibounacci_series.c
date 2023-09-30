/*Fibounacci series is a series in which current term is sum of revious two terms
and first term is 0, second term is 1*/
//next terms are equal to sum of previous two.
#include<stdio.h>
main()
{
  int num_1 = 0, num_2 = 1, num_3, count, i;
  printf("Enter the no of terms : ");
    scanf("%d", &count);
    printf("1st term is %d\n", num_1);
    printf("2nd term is %d\n", num_2);
    for (i = 3; i <= count; i++)
    {
        num_3 = num_1 + num_2;
        printf("%dth term is %d\n", i, num_3);
        num_1 = num_2;
        num_2 = num_3;
    }
}