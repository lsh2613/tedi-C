#include <stdio.h>
#include <stdlib.h>

int main(){

    int height, width;
    scanf("%d %d", &height, &width);

    int **arr = (int**) malloc ( sizeof(int*) * height );
    
    for(int i=0; i<height; i++){
        arr[i] = (int*) malloc ( sizeof(int) * width);
    }

    int result=0;
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            scanf("%d", &arr[i][j]);
            if (j%2==0)
                result+=arr[i][j];
            else
                result-=arr[i][j];            
        }
    printf("%d", result);
}