#include <stdio.h>
int main() {
    int n, cnt=0;
    
    while (1)
    {
        scanf("%d", &n);
        
        if (n<0)
            break;
        cnt++;        
    }
    printf("%d", cnt);
    
}