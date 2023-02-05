#include <stdio.h>
int main(){

    int a;
    int *pa=&a;

    int b;
    int *pb=&b;

    scanf("%d %d", pa, pb);

    *pa = *pa>0 ? *pa : -*pa;
    *pb = *pb>0 ? *pb : -*pb;

    printf("%d", *pa>*pb ? *pa : *pb);
}