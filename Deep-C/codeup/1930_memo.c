#include <stdio.h>

int mem[14][14]={0};

int superSum(int k, int n){

    if (k==0)
    {
        mem[0][n]=n;
        return n;
    }
    else if (mem[k][n]==0)
    {
        int sum=0;
        for (int i = 1; i <=n; i++)
        {
            sum += superSum(k-1, i);
        }
        mem[k][n]=sum;
        return mem[k][n];
    }
    else 
        return mem[k][n];
    
}

int main(){
    int k,n;
    // while (scanf("%d %d", &k, &n)!=EOF)
    // {
    //     printf("%d\n", superSum(k,n));
    // }
    scanf("%d %d", &k, &n);

    printf("%d\n\n", superSum(k, n));

    for (int i = 0; i < 14; i++)
    {
        for (int j = 0; j < 14; j++)
        {
            printf("%3d ",mem[i][j]);
        }
        printf("\n");
    }
}