#include <stdio.h>
int main(){

    int n;
    printf("정수를 입력하시오: ");
    scanf("%d", &n);

    if (n==0)
        printf("없음\n");
    else if (n==1)
        printf("하나\n");
    else
        printf("많음\n");        
//---------------------------------
    switch (n)
    {
    case 0:
        printf("없음\n");
        break;
    case 1:
        printf("하나\n");
        break;
    default:
        printf("많음\n");
        break;
    }
}