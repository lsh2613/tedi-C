#include <stdio.h>
typedef struct student
{
    char name[10];
    int s1;
    int s2;
    int s3;
}stu;

int main(){
    int n;
    scanf("%d", &n);

    stu student[n]; 

    int max=0;
    for (int i = 0; i < n; i++)
    {
        scanf("%s %d %d %d", student[i].name, &student[i].s1, &student[i].s2, &student[i].s3);
    }
    
    

}