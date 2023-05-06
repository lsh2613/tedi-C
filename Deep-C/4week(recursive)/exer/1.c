#include <stdio.h>

int sum(int a, int b){
    if (a==b)
        return b;
    return a+sum(a+1,b);    
}

int main(){

    printf("%d", sum(1,100));
}