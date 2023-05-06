#include <stdio.h>

int mem[50][50]={0};

int pascal(int a, int b){
    if (a==1 || b==1)
    {
        mem[a][b]=1;
        return 1;
    }
    else if(mem[a][b]==0){
        mem[a][b]=pascal(a-1,b) + pascal(a,b-1);
        return mem[a][b]%100000000;
    }
    else
        return mem[a][b]%100000000;
}

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n\n", pascal(a, b));
    // for (int i = 1; i <= a; i++)
    // {
    //     for (int j = 1; j <= b; j++)
    //     {
    //         printf("%d", mem[i][j]);
    //     }
    //     printf("\n");
    // }
    

}