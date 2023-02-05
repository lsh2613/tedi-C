#include <stdio.h>

void p(int a, int b){
    if (a==1)
        printf("%d", b);
    else{
        printf("%d\n", b-a+1);
        p(a-1, b);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    p(n, n);
}