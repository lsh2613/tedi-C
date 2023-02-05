#include <stdio.h>

typedef struct student{
    int country;
    int num;
    int score;
}stu;

int main(){

    int n;
    scanf("%d", &n);

    stu student[n];
    int scoreRanking[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &student[i].country, &student[i].num ,&student[i].score);
        scoreRanking[i]=student[i].score;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (scoreRanking[i]>scoreRanking[j])
            {
                int tmp=scoreRanking[i];
                scoreRanking[i]=scoreRanking[j];
                scoreRanking[j]=tmp;
            }
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", scoreRanking[i]);
    }
    

    
}