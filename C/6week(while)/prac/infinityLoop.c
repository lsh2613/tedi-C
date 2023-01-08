#include <stdio.h>
int main(){

    int i=0;
    while (1)
    {
        printf("1---파일열기\n");
        printf("2---파일 저장하기\n");
        printf("3---종료\n");
        scanf("%d", &i);
        if (1<=i && i<=3)
            break;
    }
}