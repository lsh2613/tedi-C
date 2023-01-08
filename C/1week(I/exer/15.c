#include <stdio.h>
int main(){
    int time;
    scanf("%d", &time);
    
    int h = time/3600;
    int m = time%3600/60;
    int s = time%60;  // = time%3600%60
    printf("%d시간 %d분 %d초", h, m, s);
}