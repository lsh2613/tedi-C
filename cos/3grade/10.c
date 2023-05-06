#include <stdio.h>
#include <string.h>
int main(){

    char s[1000];
    scanf("%s", s);

    int cnt = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i]=='1')
            cnt++;
    }

    printf("%d", cnt);    

}