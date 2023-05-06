#include <stdio.h>
int main(){

    int sum=0, cnt=0;
    while (1)
    {
        int n;
        scanf("%d", &n);
        if (n<0)
            break;
        cnt++;
        sum+=n;
    }
    printf("%f", (float)sum/cnt);
    

}