#include <stdio.h>
struct score
{
    int k;
    int e;
    int m;
    int total;
};

int main(){

    int n;
    scanf("%d", &n);

    struct score s[n];
    int total[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &s[i].k, &s[i].e, &s[i].m);
        s[i].total = s[i].e + s[i].k + s[i].m;
        total[i]=s[i].total;
    }

    // 내림차순 정렬
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (total[i]>total[j])
            {
                int tmp=total[i];
                total[i]=total[j];
                total[j]=tmp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (total[i]==s[j].total)
            {
                printf("%d %d %d %d\n", s[j].k, s[j].e, s[j].m, s[j].total);
            }
            
        }
        
    }
    

}