#include <stdio.h>

int lcm(int a, int b){
    int divisor;
    for (int i = 1; i <= a; i++)
    {
        if (a%i==0 && b%i==0)
            divisor=i;
    }
    return divisor*(a/divisor)*(b/divisor);
}

int main(){
    int n, m;
    for (int  i = 0; i < 3; i++)
    {   
        scanf("%d %d", &n, &m);
        printf("%d\n", lcm(n, m));
    }
    
}