#include <stdio.h>

void mySwap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(){
    int a=1, b=2;
    mySwap(&a,&b);
    printf("%d %d", a, b);
}