#include <stdio.h>
int main() {
    int n;
    int result=0;

    while (1)
    {
        scanf("%d", &n);
        if (n==0)
        {
            break;
        }
        else{
            result+=n;
        }
    }
    printf("%d", result);
}