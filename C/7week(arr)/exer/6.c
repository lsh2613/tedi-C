#include <stdio.h>
int main(){

    int a[10];
    int num=70;
    for (int i = 0; i < 10; i++)
    {
        a[i]=num;
        num-=7;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    
    
}