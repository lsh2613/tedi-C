#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int q[10];
int cur=0;
int n;

void init(int *q, int n){
    q=(int *) malloc (sizeof(int)*n);
}

void enqueue(int *q){
    if (cur>10)
    {
        return;
    }
    else
    {
        int k;
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
    for (int i = 0; i < n; i++)
    {
        printf("%d Q의 값 : %d\n",i, q[i]);
    }
}

int main(){
    scanf("%d", &n);
    init(q, n);
    char str[10];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", str);
        if (strcmp(str,"추가")==0)
        {
            enqueue(q);
        }
        else if (strcmp(str,"삭제")==0)
        {
            dequeue(q);
        }
        else{
            printf("잘못된 입력값입니다\n");
        }
    }
    
    printqueue(q);
    
}