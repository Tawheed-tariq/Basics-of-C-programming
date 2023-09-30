#include<stdio.h>
#include<string.h>
int main()
{
    char str[] = "muskaan",str1[20];
    printf("string1 = %s\n",str);
    strcpy(str1,str);
    printf("string2 = %s\n",str1);
    printf("%d\n",strcmp(str1,str));
    printf("Length of string1 = %ld\n",strlen(str));
    strcat(str1,str);
    printf("%s", str1);
    return 0;
}
