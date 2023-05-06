#include <stdio.h>
int main(){

    int n, m;
    scanf("%d %d", &n, &m);

    int a[n];
    for (int i = 0; i <n; i++)
    {
        a[i]=i+1;
    }

    int cnt=0;
    int sequence=2;
    while (cnt!=n)
    {
        while (a[sequence]!=0)
        {
            sequence++;
        }
        
    }
    
    
}