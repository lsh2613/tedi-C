#include <stdio.h>

void p(int a, int b){
    if (a==b)
        printf("%d", b);
    else{
        printf("%d\n", a);
        p(a+1, b);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    p(1, n);
}