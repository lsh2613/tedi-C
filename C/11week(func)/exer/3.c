#include <stdio.h>
#include <stdlib.h>
int main(){

    int n;
    scanf("%d", &n);

    int arr[n][n];
    int cntOf1=0;
    int sum=0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
            if (arr[i][j]==1)
                cntOf1++;
            else if (arr[i][j]==0){
                arr[i][j]=rand()%10+1;
                sum+=arr[i][j];
            }
        }
    }
    printf("\n%d", sum*cntOf1);
    
}