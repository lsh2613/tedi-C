#include <stdio.h>

#define MAXN 500001

int t[MAXN]; // 탑의 크기를 저장하는 배열
int ans[MAXN]; // 수신 받는 탑의 번호를 저장하는 배열
int top = -1; // 스택 포인터

typedef struct {
    int idx; // 탑의 인덱스
    int h; // 탑의 높이
} Tower;

Tower stack[MAXN]; // 스택

void push(int idx, int h) { // 스택 push 함수
    top++;
    stack[top].idx = idx;
    stack[top].h = h;
}

int main() {
    int n, i;
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
        scanf("%d", &t[i]);

    for(i = 1; i <= n; i++) {
        while(top >= 0 && stack[top].h <= t[i]) // 수신 가능한 탑을 찾을 때까지 스택에서 pop
            top--;

        if(top >= 0) // 스택에 수신 가능한 탑이 있으면
            ans[i] = stack[top].idx; // 해당 탑의 인덱스 저장

        push(i, t[i]); // 현재 탑을 스택에 push
    }

    for(i = 1; i <= n; i++)
        printf("%d ", ans[i]);

    return 0;
}
