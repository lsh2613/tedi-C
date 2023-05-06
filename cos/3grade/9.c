#include <stdio.h>
#include <string.h>
int main(){

    char n[1000];
    scanf("%s", n);

    for (int i = strlen(n)-1; i >= 0; i--)
    {
        printf("%c", n[i]);
    }
    
}