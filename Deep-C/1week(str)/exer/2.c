#include <stdio.h>
#include <string.h>
int main(){

    char str1[100];
    char str2[100];
    scanf("%s %s", str1, str2);
    unsigned long l1 = strlen(str1);
    unsigned long l2 = strlen(str2);
    printf("%lu", l1 > l2 ? l1 : l2);
}