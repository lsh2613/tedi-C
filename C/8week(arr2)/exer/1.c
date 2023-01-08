#include <stdio.h>
int main(){

    int a[5][5];
    int cnt=0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            a[i][j]=++cnt;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%3d ", a[j][i]);
        }
        printf("\n");
    }
    
}