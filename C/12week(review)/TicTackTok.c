#include <stdio.h>
#include <string.h>

char q[5][5]={' '};
int turn = 0;
int game = 1;
int x, y;

void printQ(){
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (j==4)
                printf(" %c", q[i][j]);
            else
                printf(" %c |", q[i][j]);
        }
        printf("\n----------------\n");
    }
}

void choose(){
    while (1)
    {
        printf("원하는 좌표를 입력하세요 >> ");
        scanf("%d %d", &x, &y);
        if (q[x][y]!='O' && q[x][y]!='X')
        {
            if (turn==0){
                q[x][y]='O';
                turn++;
            }
            else{
                q[x][y]='X';         
                turn--;
            }
            break;
        }
        printf("이미 입력된 좌표입니다. 다시 입력해주세요\n");
    }
}

void isWin(){
    if (turn==0)
    {
        if (q[x][0]=='O' && q[x][1]=='O' && q[x][2]=='O' && q[x][3]=='O' && q[x][4]=='O'
            || q[0][y]=='O' && q[1][y]=='O' && q[2][y]== 'O' && q[3][y]=='O' && q[4][y]=='O')
        {
            game=0;  //게임을 종료
            printf(" O 의 승리입니다.\n");
        }
    }
    else if (turn==1)
    {
        if (q[x][0]=='X'  && q[x][1]=='X' && q[x][2]=='X' && q[x][3]=='X' && q[x][4]=='X'
            || q[0][y]=='X' && q[1][y]=='X' && q[2][y]== 'X' && q[3][y]=='X' && q[4][y]=='X')
        {
            game=0;  //게임을 종료
            printf(" X 의 승리입니다.\n");
        }
    }
    
    
    
}

void gameStart(){
    printf("같은 모양이 한 줄 완성되면 승리입니다.\n");
    printf("게임을 시작하겠습니다.\n");

    while (game!=0)
    {
        printQ();
        printf("\n\n");
        choose();
        isWin();
    }
}

int main(){
    gameStart();
}