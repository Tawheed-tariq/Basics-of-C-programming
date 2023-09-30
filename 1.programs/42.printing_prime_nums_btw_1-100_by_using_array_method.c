#include<stdio.h>
#include<stdlib.h>

// recursive method

void number_array(int num[])
{
  for(int i = 0; i < 100; i++)
  {
    num[i] = i+1;
  }
}
void print_prime(int num[])
{
  int j = 0;
  if (j < 100) {
    int count = 0;
    for(int x = 1; x <= num[j]; x++)
    {
      if(num[j] % x == 0)
        count++;
    }
    if(count == 2)
      printf("%d\t",num[j]);
    j++;
    print_prime(num);
  }
}
int main()
{
  int nums[99];
  number_array(nums);
  print_prime(nums);
  return 0;
}


// simple loop method

// int main()
// {
//     int arr[99], count;
//     for(int i = 1; i <= 100; i++)
//     {
//         arr[i-1] = i;
//     }
//     for(int j = 0; j < 100; j++)
//     {
//         count = 0;
//         for(int k = 1; k <= arr[j]; k++)
//         {
//             if (arr[j]%k == 0 )
//                 count++;
//         }
//         if(count == 2)
//             printf("%d\t", arr[j]);
//     }
//     return 0;
// }
