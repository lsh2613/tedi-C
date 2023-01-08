#include <stdio.h>
int main(){

    int n;
    printf("정수를 입력하시오 : ");
    scanf("%d", &n);

    if (n%3==0)
        printf("%d는 3의 배수입니다.", n);
    else
        printf("%d는 3의 배수가 아닙니다.", n);

}