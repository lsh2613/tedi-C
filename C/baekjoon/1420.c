#include <stdio.h>
int main(){

    int n;
    scanf("%d", &n);
    char name[n][10];
    int score[n], sortedScore[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%s %d", name[i], &score[i]);
        sortedScore[i] = score[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (sortedScore[i] < sortedScore[j])
            {
                int tmp = sortedScore[j];
                sortedScore[j] = sortedScore[i];
                sortedScore[i] = tmp;
            }
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        if (score[i]==sortedScore[2])
        {
            printf("%s", name[i]);
        }
    }
    
}