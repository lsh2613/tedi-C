#include<stdio.h>
int main(){
    int score;
    scanf("%d", &score);

    if (90<=score && score<=100)
        printf("A");
    else if (70<=score && score<=89)
        printf("B");
    else
        printf("F");
        
}