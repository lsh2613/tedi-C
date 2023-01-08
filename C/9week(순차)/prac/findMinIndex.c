#include <stdio.h>
int main(){

    int a[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    int minIndex = 0;
    for (int i = 0; i < 5; i++)
    {
        if (a[minIndex]>a[i])
            minIndex=i;
    }
    printf("%d", minIndex);    
}