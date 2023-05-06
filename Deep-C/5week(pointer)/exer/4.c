#include <stdio.h>
int main(){

    int a;
    int *pa=&a;

    int b;
    int *pb=&b;

    scanf("%d %d", pa, pb);

    printf("%d", *pa**pa>*pb**pb ? *pa : *pb);

    // int absA, absB;

    // absA = *pa>0 ? *pa : -*pa;
    // absB = *pb>0 ? *pb : -*pb;

    // printf("%d", absA>=absB ? *pa : *pb);
}