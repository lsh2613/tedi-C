#include <stdio.h>
int main(){
    int n=10;
    int a[n], b[n];
    int tmp = 0;

    //b[]는 정렬 전 입력배열
    //a[]는 내림차순으로 정렬된 정렬배열
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        b[i] = a[i];
    }

    // a[]에 대해서 내림차순 정렬
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i] == b[j])
            {
                printf("%d", i>j ? i-j : j-i);
            }
        }
    }
    
    // printf("\n");
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%2d", a[i]);
    // }
}