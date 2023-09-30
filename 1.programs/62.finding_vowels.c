#include<stdio.h>
#include<ctype.h>
int main()
{
    char str[40];
    int vcount= 0,ccount = 0;
    printf("enter the string: ");
    scanf("%[^\n]s",str);
    for(int i = 0; str[i]!= '\0';i++)
    {
            str[i] = tolower(str[i]);
        if(str[i]=='a'||str[i] == 'e'|| str[i] == 'i' || str[i] =='o' || str[i] == 'u')
        vcount++;
        else if(str[i]>= 'a' && str[i] <= 'z')
        ccount++;
    }
    printf("%d\n%d",vcount,ccount);
    return 0;
}