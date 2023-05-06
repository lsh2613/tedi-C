#include <stdio.h>

int main(){

    int a=5;
    float b = a/2;
    printf("a = %d\n", a);
    printf("a/2 %%d: %d\n", a/2); //2
    printf("a/2 %%f: %f\n", a/2); //X
    printf("a/2 %%f %f\n", b); // 2.000000
    printf("(float)(a/2): %f\n", (float)(a/2)); // 2.000000
    printf("(float)a/2: %f\n", (float)a/2); // 2.5
    printf("a/2.0: %f\n", a/2.0); // 2.5

    // printf("%d", a/2);

}