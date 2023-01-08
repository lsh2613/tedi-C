#include <stdio.h>
int main(){

    int a[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    int min = a[0];
    for (int i = 0; i < 5; i++)
    {
        if (min>a[i])
            min=a[i];
    }
    printf("%d", min);    
}