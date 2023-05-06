#include <stdio.h>
int main(){

    FILE *fp = NULL;
    fp=fopen("alphabet.txt","r");

    if (fp==NULL)
        return 0;
    char c;
    while ((c=fgetc(fp))!=EOF)
    {
        printf("%c",c);
    }
    
    fclose(fp);
}