#include<stdio.h>
int main(){
    int a=1, b=1;

    if (a>0)
        printf("1\n");
    if (b>0)
        printf("2\n");
        
    printf("--------------------------\n");

    if (a>0)
        printf("3\n");
    else if (b>0)
        printf("4\n");

}