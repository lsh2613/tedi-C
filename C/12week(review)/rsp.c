#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){

    int my=0;
    int flag=0, cnt=0;
    while (flag==0)
    {
        srand(time(NULL));
        int com = rand()%3; // 0:가위 1:바위 2:보
        printf("\n0:가위 1:바위 2:보 입력 >>");
        scanf("%d", &my);
        if (com==0)
        {
            if (my==0)
                printf("컴퓨터:가위 VS 사용자:가위 => 비겼습니다.");
            if (my==1){
                printf("컴퓨터:가위 VS 사용자:바위 => 이겼습니다.");
                flag++;
            }
            if (my==2)
                printf("컴퓨터:가위 VS 사용자:보 => 졌습니다.");
        }
        if (com==1) //바위
        {
            if (my==0)
                printf("컴퓨터:바위 VS 사용자:가위 => 졌습니다.");
            if (my==1)
                printf("컴퓨터:바위 VS 사용자:바위 => 비겼습니다.");
            if (my==2){
                printf("컴퓨터:바위 VS 사용자:보 => 이겼습니다.");
                flag++;
            }
        }
        if (com==2)
        {
            if (my==0){
                printf("컴퓨터:보 VS 사용자:가위 => 이겼습니다.");
                flag++;                
            }
            if (my==1)
                printf("컴퓨터:보 VS 사용자:바위 => 졌습니다.");
            if (my==2)
                printf("컴퓨터:보 VS 사용자:보 => 비겼습니다.");
        }
        cnt++;
    }
        printf("\n시도 횟수: %d", cnt);
}