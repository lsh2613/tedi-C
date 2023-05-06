#include <stdio.h>

typedef struct student
{
    char name[10];
    int k;
    int m;
    int e;
}stu;

int main(){

    stu s[4];
    float average[4];
    for (int i = 0; i < 4; i++)
    {
        scanf("%s %d %d %d", s[i].name, &s[i].k, &s[i].m, &s[i].e);
        average[i] = (s[i].k + s[i].m + s[i].e)/4.0;
    }
    
    if (average[0]>=average[1] && average[0]>=average[2] && average[0]>=average[3])
    {
        printf("%s", s[0].name);
    }
    else if (average[1]>=average[0] && average[1]>=average[2] && average[1]>=average[3])
    {
        printf("%s", s[1].name);
    }
    else if (average[2]>=average[0] && average[2]>=average[1] && average[2]>=average[3])
    {
        printf("%s", s[2].name);
    }
    else
        printf("%s", s[3].name);
}