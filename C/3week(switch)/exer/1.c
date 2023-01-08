#include <stdio.h>
int main(){

    int n;
    scanf("%d", &n);

    printf(n>100 ? "초과" : n>1 ? "정상" : "매우작음");
}