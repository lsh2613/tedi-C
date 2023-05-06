#include <stdio.h>
#include <stdlib.h>
int main(){

    FILE *fp=fopen("sales.txt", "a");

    fprintf(fp, "2022.3.1 매출 %d", 20000);
    fclose(fp);
}