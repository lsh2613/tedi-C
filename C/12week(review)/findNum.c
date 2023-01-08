#include <stdio.h>
#include <stdlib.h>
int main(){

    int com = rand()%101;
    int cnt = 0;
    while(1){
        int my;
        printf("0~100 숫자 맞추기 >> ");
        scanf("%d", &my);
        cnt++;
        if (com>my)
            printf("UP\n");
        else if (my>com)
            printf("DOWN\n");
        else{
            printf("정답!!\n시도 횟수: %d", cnt);        
            break;
        }
    }
}