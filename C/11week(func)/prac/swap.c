#include <stdio.h>

void swap1(int a, int b){
    int tmp = a;
    a = b;
    b = tmp;
}

int main(){
    int a = 0, b = 1;
    swap(a,b);
    printf("%d %d", a, b);
}