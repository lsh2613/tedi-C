#include <stdio.h>
#include <stdlib.h>
// #include <conio.h>
int main(){
    //vscode에서는 라이브러리 지원을 안 해줘서 실행 시 오류
    // dev c++ 에서 실행 시 sleep을 _sleep으로 변환 후 실행
    int a,b,c;
    while (1)
    {
        a=rand()%10;
        b=rand()%10;
        c=rand()%10;

        printf("%d %d %d\n");
        sleep(500);

        if(kbhit())
            break;
    }

    if (a==b && b==c)
        printf("Jack POTTTTTTTT!!!");
    else
        printf("no j.p");    
}