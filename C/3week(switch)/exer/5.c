#include <stdio.h>
int main(){

    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);

    printf((a+b+c)/3.0 >= 60 ? "합격" : "불합격");
}