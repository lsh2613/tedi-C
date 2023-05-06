#include <stdio.h>
#include <stdlib.h>
int main(){

    FILE *fp=fopen("sales.txt", "r");
    char str[255];
    char str2[255];
    fscanf(fp, "%s %s", str, str2);
    printf("%s %s", str, str2);
    fclose(fp);
}