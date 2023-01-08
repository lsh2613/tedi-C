#include <stdio.h>
#include <stdlib.h>

int cur = 0;

void init(int *q, int size);
void printQueue(int *q, int size);
void enqueue(int *q);
void enqueueN(int *q, int n);
int dequeue(int *q);

void init(int *q, int size){
    q=(int*)malloc(sizeof(int)*size);
}

void enqueue(int *q){
    q[cur]=cur+1;
    cur++;
}

void enqueueN(int *q, int n){
    q[cur]=n;
    cur++;
}

int dequeue(int *q){
    int n;
    if (cur == 0)
    {
        return 0;
    }
    else{
        n = q[0];
        for (int i = 1; i < cur; i++)
        {
            q[i-1] = q[i];
        }
    }
    q[cur-1]=0;
    cur--;
    return n;
}

void printQueue(int *q, int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d Q의 값 : %d\n", i, q[i]);
    }
    
}

int main(){

    int size, term;
    scanf("%d %d", &size, &term);

    int q[size];
    init (q, size);

    for (int i = 0; i < size; i++)
    {
        enqueue(q);
    }
    
    int cnt=0;
    while (cnt!=size)
    {   
        int n;
        while (1)
        {
            n = dequeue(q);

            if (n!=0){
                enqueueN(q, n);
                break;
            }
        }
        while (1)
        {
            n = dequeue(q);
            if (n!=0){
                enqueueN(q, n);
                break;
            }
        }
        while (1)
        {
            n = dequeue(q);
            if (n!=0)
            {
                printf("%d ", n);
                cnt++;
            }
        }
    }
    
}