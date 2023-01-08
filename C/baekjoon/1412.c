#include <stdio.h>
int main(){

    char str[91];
    int alphabet[26]={0};
    gets(str);

    for (int i = 0; str[i]!='\0'; i++)
    {
        alphabet[str[i]-97]++;
    }
    
    for (int i = 0; i < 26; i++)
    {
        printf("%c : %d\n", i+97, alphabet[i]);
    }
    
}