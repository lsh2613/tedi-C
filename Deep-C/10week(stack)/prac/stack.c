#include <stdio.h>
#include <stdlib.h>

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
    if (cur>9)
    {
        return;
    }
    else{
        int k;
        printf("stack에 값 입력: ");
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
    for (int i = cur-1; i >= 0; i--)
    {
        printf("%d S의 값 : %d\n", i, s[i]);
    }
}

int main(){

    int a;
    init (s);

    for (int i = 0; i < 10; i++)
    {
        push(s);
    }
    
    printf("Stack에서 제거할 개수 (0~9) : ");
    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        pop(s);
    }
    
    printStack(s);
}