//updating contents in a file
#include<stdio.h>
int main()
{
    FILE *fp;
    char filename[] = "file.txt";
    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error opening file %s\n", filename);
        return 1;
    }
    fprintf(fp,"This is another line\n");
    fclose(fp);

    return 0;
}