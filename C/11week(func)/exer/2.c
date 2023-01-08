#include <stdio.h>
#include <stdlib.h>
int main(){

    int n;
    scanf("%d", &n);

    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j]=rand()%100+1;
        }
    }

    int max;
    int min=max=arr[0][0];    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (min>arr[i][j])
                min=arr[i][j];
            if (max<arr[i][j])
                max=arr[i][j];
        }
    }

    printf("최솟값: %d , 최댓값: %d", min, max);    
}