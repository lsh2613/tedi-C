#include <stdio.h>
int main(){

    char str[100]="A barking dog never bites";
    int cnt=0;

    for (int i = 0; str[i]!='\0'; i++)
    {
        cnt++;    
    }

    printf("문자열 %s의 길이는 %d입니다", str, cnt);
}