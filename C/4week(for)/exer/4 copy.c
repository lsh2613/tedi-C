#include <stdio.h>
int main() {
    int n;

    scanf("%d", &n);
    while (n!=0)
    {
        printf("%d", n);
        scanf("%d", &n);
    }

    do
    {
        scanf("%d", &n);
        printf("%d", n);
    } while (n!=0);
    
    while (1)
    {
        scanf("%d", &n);
        if (n==0)
        {
            break;
        }
        printf("%d", n);
        
    }
    
}