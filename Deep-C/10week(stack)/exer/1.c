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
    for (int i = cur-1; i >=0; i--)
    {
        printf("%d\n", s[i]);
    }
}

int main(){

    int n;
    char command[8];

    init (s);
    
    printf("0~10 사이의 수 입력 : ");
    scanf("%d", &n);

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

