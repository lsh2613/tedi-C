#include <stdio.h>
#include <string.h>
int main(){

    char str1[101];
    char str2[101];

    scanf("%s %s", str1, str2);
    
    printf("%s", strlen(str1)>strlen(str2) ? str1 : str2);

    // int str1len = 0;
    // for (int i = 0; str1[i]!='\0'; i++)
    // {
    //     str1len++;
    // }
    
}