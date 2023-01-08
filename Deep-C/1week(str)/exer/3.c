#include <stdio.h>
int main(){

    char str[5][30];
    for (int i = 0; i < 5; i++)
    {
        scanf("%s", str[i]);
    }
    for (int i = 4; i >= 0 ; i--)
    {
        printf("%s ", str[i]);
    }
}