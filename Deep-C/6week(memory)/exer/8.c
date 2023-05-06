#include <stdio.h>
#include <stdlib.h>
int main(){

    int height, width ;
    scanf("%d %d", &height, &width);

    int **arr = (int**) malloc ( sizeof(int*) * height );
    for(int i=0; i<height; i++){
        arr[i] = (int*) malloc ( sizeof(int) * width);
    }

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    
    int maxIndexL=0;
    int maxIndexR=0;
    int minIndexL=0;
    int minIndexR=0;
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (arr[maxIndexL][maxIndexR]<arr[i][j])
            {
                maxIndexL=i;
                maxIndexR=j;
            }
            if (arr[minIndexL][minIndexR]>arr[i][j])
            {
                minIndexL=i;
                minIndexR=j;
            }
        }
    }
    printf("가장 큰 값의 인덱스: %d %d\n", maxIndexL+1, maxIndexR+1);
    printf("가장 작은 값의 인덱스: %d %d\n", minIndexL+1, minIndexR+1);
    
}