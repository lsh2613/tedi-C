#include <stdio.h>
int main(){

    int a[10]={12,3,19,6,18,8,12,4,1,19};

    int minIndex=0;
    for (int i = 1; i <= 9; i++)
    {
        if (a[minIndex]>a[i])
            minIndex= i;
    }
    
    printf("%d", minIndex);
}