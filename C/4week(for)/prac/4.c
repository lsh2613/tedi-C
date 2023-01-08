#include <stdio.h>
int main() {
    int n;
    printf("정수의 배수를 구하기 위한 정수를 입력: ");
    scanf("%d", &n);
    for (int i = n; i<=n*10; i+=n)
    {
        if (i<n*10)
        {
            printf("%d, ",i);
        }
        else
            printf("%d", i);
    }
    
}