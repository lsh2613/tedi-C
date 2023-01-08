#include <stdio.h>
int main(){
    printf("수식어를 입력하시오 : ");
    int a,b;
    char op;
    scanf("%d %c %d", &a, &op, &b);

    if (op=='+')
        printf("%d %c %d = %d",a,op,b,a+b);
    else if (op=='-')
        printf("%d %c %d = %d",a,op,b,a-b);
    else if (op=='*')
        printf("%d %c %d = %d",a,op,b,a*b);
    else if (op=='/')
        printf("%d %c %d = %d",a,op,b,a/b);
}