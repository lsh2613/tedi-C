#include <stdio.h>
#include <stdlib.h>
int main(){

    int n;
    scanf("%d", &n);

    int *arr0=(int*)malloc(sizeof(int)*n);
    int *arr1=(int*)malloc(sizeof(int)*n);
    int *arr2=(int*)malloc(sizeof(int)*n);
    int sum[3]={0};
    int sortSum[3];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr0[i]);
        sum[0]+=arr0[i];
    }
    sortSum[0]=sum[0];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
        sum[1]+=arr1[i];
    }
    sortSum[1]=sum[1];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr2[i]);
        sum[2]+=arr2[i];
    }
    sortSum[2]=sum[2];
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (sortSum[i]>sortSum[j])
            {
                int tmp=sortSum[i];
                sortSum[i]=sortSum[j];
                sortSum[j]=tmp;
            }
        }
    }
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (sortSum[i]==sum[j])
                printf("%d ", j+1);
        }
    }
}