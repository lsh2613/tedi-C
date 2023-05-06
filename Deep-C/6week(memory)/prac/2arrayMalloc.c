#include <stdio.h>
#include <stdlib.h>
int main(){

    int height = 2, width = 3;

    int **arr = (int**) malloc ( sizeof(int*) * height );
    
    for(int i=0; i<height; i++){
        arr[i] = (int*) malloc ( sizeof(int) * width);
    }

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            scanf("%d", &arr[i][j]);
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
}