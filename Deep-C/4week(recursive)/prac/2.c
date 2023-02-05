#include <stdio.h>

int sum(int k){
    if (k==1)
    {
        return 1;
    }
    return k+sum(k-1);
}

int main(){

    int n;
    scanf("%d", &n);

    printf("%d", sum(n));
}