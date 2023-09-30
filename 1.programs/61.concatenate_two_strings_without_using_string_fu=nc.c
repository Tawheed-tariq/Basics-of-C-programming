#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20] = "TAwheed", str2[20] = "TAriq";
    int i = strlen(str1),j = 0;
    while(str2[j] != '\0')
    {
        str1[i] = str2[j];
        i++;
        j++;
    }
    printf("%s",str1);
    return 0;
}