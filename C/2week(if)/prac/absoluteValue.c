#include<stdio.h>
int main(){
    int n;
    printf("정수를 입력하시오: ");
    scanf("%d", &n);

    if (n<0)
        n = -n;
    

    printf("절대값은 %d 입니다.", n);    
}