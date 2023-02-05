#include <stdio.h>

int fibo(int k){
    if (k <= 1) {
        return k;
    }
   
    return fibo(k-1) + fibo(k-2);
}

int main(){
    int n;
    scanf("%d", &n);

    printf("%d", fibo(n));

}