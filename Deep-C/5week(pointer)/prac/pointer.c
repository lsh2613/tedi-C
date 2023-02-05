#include <stdio.h>
int main(){
    int a=3;
    int *p;
    p=&a;

    printf("%p\n", &a);
    printf("%p\n", p);
    printf("%d\n", a);
    printf("%d\n", *p);
}