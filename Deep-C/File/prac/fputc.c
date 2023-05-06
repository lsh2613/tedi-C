#include <stdio.h>
int main(){

    FILE *fp = NULL;
    fp=fopen("alphabet.txt","w");

    if (fp==NULL)
        return 0;

    char c;
    for (char c = 'a'; c <= 'z'; c++)
    {
        fputc(c,fp);
    }
    fclose(fp);
}