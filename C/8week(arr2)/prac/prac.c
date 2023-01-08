#include <stdio.h>
int main(){

    int a[5][7];
    int cnt=0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            a[i][j]=++cnt;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            printf("%3d", a[i][j]);
        }
        printf("\n");
    }
    
}