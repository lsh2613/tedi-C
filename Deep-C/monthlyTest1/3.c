#include <stdio.h>

int mySum(int n){
    int sum=0;
    for (int i = 1; i <= n; i++)
    {
        int square=1;
        for (int j = 1; j <= i; j++)
        {
            square *= i;
        }
        sum += square;
    }
    return sum;
}

int main(){

    int n;
    scanf("%d", &n);
    int result = mySum(n);
    printf("%d", result);
}