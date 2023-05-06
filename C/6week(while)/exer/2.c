#include <stdio.h>
int main() {
    int result=0;
    while (1)
    {
        int n;
        scanf("%d", &n);
        if (n==0){
            printf("%d", result);
            break;
        }
        result+=n;
    }
    
}