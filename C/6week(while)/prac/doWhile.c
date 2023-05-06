#include <stdio.h>
int main(){
    int i= 0;
    while (i<1 || i>3)
    {
        printf("1---파일열기\n");
        printf("2---파일 저장하기\n");
        printf("3---종료\n");
        scanf("%d", &i);
    }
    printf("선택된 메뉴 = %d\n", i);
}