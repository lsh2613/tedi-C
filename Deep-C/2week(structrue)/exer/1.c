#include <stdio.h>

struct student
{
    char name[10];
    int k;
    int m;
};

int main(){
    struct student s[2];

    for (int i = 0; i < 2; i++)
    {
        scanf("%s %d %d", s[i].name, &s[i].k, &s[i].m);
    }
    
    printf("%d\n", s[0].k + s[1].k);
    printf("%d\n", s[0].m + s[1].m);

}