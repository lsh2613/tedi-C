#include <stdio.h>
int main(){

    int n, t;
    scanf("%d %d", &n, &t);
    int time[t+1];
    for (int i = 0; i <= t; i++)
        time[i]=0;
    
    for (int i = 0; i < n; i++)
    {
        int cycle;
        scanf("%d", &cycle);
        for (int j = 1; j <= t; j++)
        {
            if (cycle*j<=t)
                time[cycle*j]++;
        }
    }

    int cnt=0;
    for (int i = 0; i <=t; i++)
    {
        if (time[i]>=1)
        {
            cnt++;
        }
    }
    printf("%d", cnt);        

}
