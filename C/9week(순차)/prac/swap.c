#include <stdio.h>
int main(){

    int i=1,j=10, tmp;
    tmp=i;
    i=j;
    j=i;
    printf("i:%d  j:%d",i ,j);
}