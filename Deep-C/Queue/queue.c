#include <stdio.h>
#include <stdlib.h>

int q[10];
int cur=0;

void init(int *q){
    q=(int *) malloc (sizeof(int)*10);
}

void enqueue(int *q){
    if (cur>9)
    {
        return;
    }
    else
    {
        int k;
        printf("queue에 값 입력: ");
        scanf("%d", &q[cur]);
        cur++;
    }
}

void dequeue(int *q){
    if (cur==0)
    {
        return;
    }
    else
    {
        for (int i = 1; i < cur; i++)
        {
            q[i-1]=q[i];
        }
    }
    q[cur-1]=0;
    cur--;    
}

void printqueue(int *q){
    for (int i = 0; i < 10; i++)
    {
        printf("%d Q의 값 : %d\n",i, q[i]);
    }
}

int main(){
    int a;
    init(q);

    for (int i = 0; i < 10; i++)
    {
        enqueue(q);
    }
    printf("Q에서 제거할 갯수 (0~9) : ");
    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        dequeue(q);
    }
    
    printqueue(q);
    
}