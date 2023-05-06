#include <stdio.h>
#include <stdlib.h>
int main(){

    char *a = (char *)malloc(sizeof(char)*5);

    for (int i = 0; i < 5; i++)
    {
        scanf("%c", a+i);
    }
    
    for (int i = 4; i >= 0; i--)
    {
        printf("%c", *(a+i));
    }
    
}