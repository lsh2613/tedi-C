#include <stdio.h>
int main(){

    int a[5];
    int num=5;
    for (int i = 0; i < 5; i++)
    {
        a[i]=num;
        num+=5;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    
    
}