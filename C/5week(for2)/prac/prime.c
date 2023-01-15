#include <stdio.h>
int main(){

    int n;
    scanf("%d", &n);

    //해당하는 범위
    for (int i = 1; i <= n; i++)
    {
        int cnt=0; //약수의 개수

        //i값을 j로 나눠서 약수의 개수 증가
        for (int j = 1; j <= i; j++)
        {   
            if (i%j==0)
                cnt++;
        }
        // 약수의 개수가 2개 = 소수, 따라서 출력
        if (cnt==2)
            printf("%d ", i);
    }
    
}