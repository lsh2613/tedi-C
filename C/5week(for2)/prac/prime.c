#include <stdio.h>
int main(){

    int n;
    scanf("%d", &n);

    //해당하는 범위
    for (int i = 1; i <= n; i++)
    {
        int cnt=0; //약수의 개수
        //각 i값의 소수 판별
        for (int j = 1; j <= i; j++)
        {
            if (i%j==0)
                cnt++;
        }
        if (cnt==2)
            printf("%d ", i);
    }
    
}