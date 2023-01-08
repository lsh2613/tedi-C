#include <stdio.h>
int main(){

    int a;
    scanf("%d", &a);

    int abs;
    
    abs = a > 0 ? a : -a;
    printf("%d\n", abs);

    printf("%d", a > 0 ? a : -a);

}