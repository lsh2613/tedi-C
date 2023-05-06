#include <stdio.h>
#include <string.h>

int main(){

    char str1[51];
    char str2[51];
    scanf("%s %s", str1, str2);

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1>len2)
    {
        for (int i = 0; i < len2; i++)
            printf("%c", str1[i]);
    }
    else if (len1<len2)
    {
        for (int i = 0; i < len1; i++)
            printf("%c", str2[i]);
    }
    else{ //문자열 길이가 같을 때
        if (strcmp(str1, str2)==0)
            printf("%s", str1);
        else{ //길이만 같을 때
            for (int i = len1-1; i >=0; i--)
                printf("%c", str1[i]);
        }
    }
    
    
}