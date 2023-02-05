#include <stdio.h>
int main(){

    int a;
    int *p=&a;

    scanf("%d", p);

    printf("%d", a);
    printf("%d", *p);
}