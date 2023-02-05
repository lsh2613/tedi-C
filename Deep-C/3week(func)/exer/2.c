#include <stdio.h>

int f(int k);

int main(){
    int n;
    scanf("%d", &n);

    printf("%d", f(n));
}

int f(int k){
    int result=1;
    for (int i = 1; i <= k; i++)
    {
        result*=i;
    }
    return result;
}