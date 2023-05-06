#include <stdio.h>
int main(){
    int n;
    printf("합을 구하기 위한 정수를 입력하세요:  ");
    scanf("%d", &n);

    int i=1, sum=0;
    while (i<=n)
    {
        sum+=i;
        i++;
    }
    printf("1부터 %d까지의 합%d", n, sum);
}