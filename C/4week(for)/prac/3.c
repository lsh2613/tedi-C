#include <stdio.h>
int main() {
    int n;
    printf("세제곱을 구하기 위한 정수를 입력하세요: ");
    scanf("%d", &n);
    printf("========================\n");
    printf("    i         i의 세제곱\n");
    printf("========================\n");
    for (int i = 1; i <= n; i++)
    {
        printf("    %d          %3d\n", i, i*i*i);
    }
}