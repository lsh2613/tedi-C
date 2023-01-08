#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){

    srand(time(NULL));
    int a[3];
    for (int i = 0; i < 3; i++)
    {
        a[i]=rand()%10;
        printf("%d ", a[i]);
    }
    
}