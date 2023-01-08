#include <stdio.h>
#include <stdlib.h>
int main(){
    // 게임 규칙: 랜덤으로 받는 num배열의 값에 중복된 값이 없어여 하고
    // 입력하는 사용자도 중복되는 값을 입력하면 안됨
    int num[3];
    num[0]=rand()%10;
    num[1]=rand()%10;
    num[2]=rand()%10;
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", num[i]);
    }
    printf("\n");

    while (1)
    {
        int my[3], n;
        int strike=0, ball=0;
        printf("임의의 값 3개 맞추기 >> ");
        for (int i = 0; i < 3; i++)
        {
            scanf("%d", &n);
            my[i]=n;
        }

        if (num[0]==my[0] && num[1]==my[1] && num[2]==my[2]){
            printf("정답!!!!!!!!!!!");
            break;
        }

        if (num[0]==my[0])
            strike++;
        if (num[1]==my[1])
            strike++;
        if (num[2]==my[2])
            strike++; 

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (num[i]==my[j])
                    ball++;
            }
        }
        printf("%dS, %dB\n", strike, ball-strike);
    }
    
}