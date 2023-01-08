#include <stdio.h>
int main(){

    int score;
    scanf("%d", &score);

    switch (score/10)
    {
    case 10:
    case 9:
        printf("A");
        break;
    case 8:
    case 7:
        printf("B");
        break;

    default:
        printf("나머지");
        break;
    }

}