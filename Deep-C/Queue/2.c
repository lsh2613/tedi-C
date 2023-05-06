#include <stdio.h>
#include <stdlib.h>

int q[10];
int cur=0;

void init(int *q){
    q=(int *) malloc (sizeof(int)*10);
}

void enqueue(int *q, int i){
    if (cur>9)
    {
        return;
    }
    else
    {
        q[cur]=i;
        cur++;
    }
}

int dequeue(int *q){
    int result;
    if (cur==0)
    {
        return 0;
    }
    else
    {
        result=q[0];
        for (int i = 1; i < cur; i++)
        {
            q[i-1]=q[i];
        }
    }
    q[cur-1]=0;
    cur--;   
    return result;
}

void printqueue(int *q){
    for (int i = 0; i < 10; i++)
    {
        printf("%d Q의 값 : %d\n",i, q[i]);
    }
}

int main(){
    int a;
    int n, m;
    scanf("%d %d", &n, &m);
    init(q);

    for (int i = 1; i <= n; i++)
    {
        enqueue(q, i);
    }

    int cnt=0;
    while (cnt!=n)
    {
        int sequence=1;
        while(sequence!=m){
            int n = dequeue(q);
            enqueue(q, n);
            sequence++;
        }
        int prt = dequeue(q);
        printf("%d ",prt);

        cnt++;
    }
    
}