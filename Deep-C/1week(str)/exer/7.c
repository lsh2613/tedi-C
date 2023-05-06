#include <stdio.h>
#include <string.h>

int main(){

    while (1)
    {
        char str[21];
        scanf("%s", str);

        if (strcmp(str, "END")==0)
            break;

        for (int i = strlen(str)-1; i >= 0; i--)
        {
            printf("%c\n", str[i]);
        }
    }
    
}