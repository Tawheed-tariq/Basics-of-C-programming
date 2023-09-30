//retrieving cpontents of a file
#include <stdio.h>

int main() {
    FILE *fp;
    char filename[] = "test.txt";
    char text[20];
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error opening file %s\n", filename);
        return 1;
    }
    fgets(text,20,fp);
    printf("%s",text);
    fclose(fp);
    return 0;
}
