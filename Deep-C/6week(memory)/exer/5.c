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

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
    
}