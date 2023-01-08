#include <stdio.h>
int main(){

    int n;
    scanf("%d", &n);

    switch (n)
    {
    case 30:
        printf("BAD");
        break;
    case 60:
        printf("GOOD");
        break;
    case 100:
        printf("PERFECT");
        break;
    default:
        printf("NICE");
        break;
    }
}