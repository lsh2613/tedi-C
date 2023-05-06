#include <stdio.h>
#include <string.h>
int main(){
    FILE *fp=fopen("file.txt", "w");

    char str[100];
    if (fp==NULL)
        return 0;
    fputs("첫 번째 줄\n", fp);    
    fputs("두 번째 줄\n", fp); 
    fclose(fp);   
    
}