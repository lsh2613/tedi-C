#include<stdio.h>
int main(){
    char str[31];

    fgets(str, 31, stdin);
    printf("%s", str);
}