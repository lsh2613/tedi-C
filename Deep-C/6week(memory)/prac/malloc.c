#include <stdio.h>
#include <stdlib.h>
int main(){
    int *x = (int *)malloc(sizeof(int));
    scanf("%d", x);
    printf("%d\n", *x);
    free(x);

    int a;
    int *p = &a;
    scanf("%d", p);
    printf("%d", *p);

}