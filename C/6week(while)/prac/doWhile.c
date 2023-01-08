#include <stdio.h>
int main(){
    //do-while을 써야되는 while의 안 좋은 예시
    int i;
    printf("1---파일열기\n");
    printf("2---파일 저장하기\n");
    printf("3---종료\n");
    scanf("%d", &i);
    while (i<1 || i>3)
    {
        printf("1---파일열기\n");
        printf("2---파일 저장하기\n");
        printf("3---종료\n");
        scanf("%d", &i);
    }
    printf("선택된 메뉴 = %d\n", i);
}