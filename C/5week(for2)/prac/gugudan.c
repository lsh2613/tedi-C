#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=9; j++)
        {
            printf("%d * %d = %d\n", i, j, i*j);
        }
        printf("\n");
    }
    
}