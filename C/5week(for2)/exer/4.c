#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    //방법1
    // for (int i = n; i >= 1; i--)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    //방법2
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = n; j >= i; j--)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }
}