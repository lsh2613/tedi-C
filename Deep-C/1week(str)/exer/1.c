#include <stdio.h>
#include <string.h>
int main(){
    char str[101];
    scanf("%s", str);

//  str[i]!='\0'
    for (int i = 0; i<strlen(str); i++)
    {
        if (65<=str[i] && str[i]<=90)
            printf("%c",str[i]);
            
        else if (97<=str[i] && str[i]<=122)        
            printf("%c", str[i]-32);
    }
}