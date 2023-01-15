#include <stdio.h>
#include <string.h>
typedef struct student
{
    int h;
    char name[10];
    int k_score;
    int e_score;
    int m_score;
}s;

int main(){
    s s[5];
    struct student stu[3];
    
    s[0].h=1234;

    // s[0].name[10]="이승헌";
    // s[0].name[]="이승헌";
    strcpy(s[0].name, "이승헌");

    s[0].k_score=90;
    s[0].e_score=60;
    s[0].m_score=100;

    float avg = (s[0].k_score + s[0].e_score + s[0].m_score)/3.0;

    printf("학번: %d\n", s[0].h);
    printf("이름: %s\n", s[0].name);
    printf("학점: %f\n", avg);

}