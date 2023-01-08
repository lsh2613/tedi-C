#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int s[10];
int cur = 0;

void init(int *s);
void push(int *s);
void pop(int *s);
void printStack(int *s);

void init(int *s){
    s = (int*)malloc(sizeof(int)*10);
}

void push(int *s){
    if (cur>10)
    {
        return;
    }
    else{
        int k;
        scanf("%d", &s[cur]);
        cur++;
    }
}

void pop(int *s){
    if (cur == 0)
    {
        return;
    }
    else{
        s[cur-1]=0;
        cur--;
    }
}

void printStack(int *s){
    for (int i = 0; i < 10; i++)
    {
        printf("%d S의 값 : %d\n", i, s[i]);
    }
}

int main(){

    int n;
    char command[2];

    init (s);
    
    printf("0~10 사이의 수 입력 : ");
    scanf("%d", &n);

    //for문 조건식 5자리에 변수n을 넣으면 1번만 실행되는 오류, 특정 값 넣어서 실행
    for (int i=0; i<n; i++)
    {
        scanf("%s", command);
        if (strcmp(command, "추가")==0){
            push(s);
        }
        else if (strcmp(command, "삭제")==0){
            pop(s);
        }
        else{
            printf("잘못된 입력입니다, 다시 입력해 주세요\n");
            continue;
        }
    }
    
    printStack(s);
}

