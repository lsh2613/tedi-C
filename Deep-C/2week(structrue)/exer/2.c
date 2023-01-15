#include <stdio.h>

struct student
{
    char name[10];
    int grade;
    int class;
};


int main(){
    int n;
    scanf("%d", &n);

    struct student s[n];
    
    int grade[7]={0};

    for (int i = 0; i < n; i++)
    {
        scanf("%s %d %d", s[i].name, &s[i].grade, &s[i].class);
        switch (s[i].grade)
        {
        case 1:
            grade[1]++;
            break;
        case 2:
            grade[2]++;
            break;
        case 3:
            grade[3]++;
            break;
        case 4:
            grade[4]++;
            break;
        case 5:
            grade[5]++;
            break;
        case 6:
            grade[6]++;
            break;
        }
    }
    
    for (int i = 1; i <=6; i++)
    {
        printf("%d학년: %d명\n", i, grade[i]);
    }
    

}