#include <stdio.h>
#include <stdlib.h>
int main(){

    int *a = (int *)malloc(sizeof(int)*5);

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", a+i);
    }
    
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(a+i));
    }
    
}