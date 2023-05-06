#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int a[n][n];
    int cnt=0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j]=++cnt;
        }
    }

    for (int i = n-1; i >= 0; i--)
    {
        if (i%2==1)
        {
            for (int j = 0; j < n; j++)
            {
                printf("%3d ", a[i][j]);
            }
        }

        if (i%2==0)
        {
            for (int j = n-1; j >= 0; j--)
            {
                printf("%3d ", a[i][j]);
            }
        }
        printf("\n");
    }
    
}