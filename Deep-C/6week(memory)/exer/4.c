#include <stdio.h>
#include <stdlib.h>
int main(){

    int height = 3, width = 3;
    int **arr;
    arr = (int**) malloc ( sizeof(int*) * height );
    for(int i=0; i<height; i++){
        arr[i] = (int*) malloc ( sizeof(int) * width);
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int n;
    scanf("%d", &n);
    if (n==1)
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                printf("%d ", arr[3-j-1][i]);
            }
            printf("\n");
        }
    }
    else if (n==2)
    {
        for (int i = 2; i >= 0; i--)
        {
            for (int j = 2; j >= 0; j--)
            {
                printf("%d ", arr[i][i]);
            }
            printf("\n");
        }
    }
    
    
}