#include <stdio.h>
int main(){

    int a[10]={12,3,19,6,18,8,12,4,1,19};

    int min=a[0];
    for (int i = 1; i <= 9; i++)
    {
        if (min>a[i])
            min=a[i];
    }
    
    printf("%d", min);
}