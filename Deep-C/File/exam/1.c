#include <stdio.h>
int main(){

    FILE *fp = fopen("alphabet.txt", "r");
    FILE *fp2 = fopen("alphabet1.txt", "w");
    
    int c;
    while ((c = fgetc(fp))!=EOF)
    {
        fputc(c, fp2);
    }
    fclose(fp);
    fclose(fp2);

}