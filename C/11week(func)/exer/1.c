#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int plus(int a, int b){
    return a+b;
}

int main(){
    srand(time(NULL));
    int n[5];
    int sum=0;
    for (int i = 0; i < 5; i++)
    {
        n[i] = rand() % 100 + 1;
        sum = plus(sum, n[i]);
    }
    printf("%d", sum);
}