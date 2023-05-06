#include <stdio.h>
int main(){

    int a[10];
    int n;
    scanf("%d", &n);
    int val=n;
    for (int i = 0; i < 10; i++)
    {
        a[i]=val;
        val+=n;
    }
    for (int i = 9; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }
    
    
}