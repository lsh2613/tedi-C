#include <stdio.h>

int sum(int a, int b){
    return a+b;
}

int main(){

    int a, b, c;
    printf("두 개의 정수를 입력하시오: ");
    scanf("%d %d", &a, &b);

    c=sum(a, b);
    printf("두 수의 합: %d\n",c);
}