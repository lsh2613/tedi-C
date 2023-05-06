#include <stdio.h>
void sum(int a, int b); //함수 원형

int main(){

    int a, b, c;
    printf("두 개의 정수를 입력하시오: ");
    scanf("%d %d", &a, &b);

    sum(a, b);
}

void sum(int a, int b){
    printf("두 수의 합: %d",a+b);
}