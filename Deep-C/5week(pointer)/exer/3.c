#include <stdio.h>
int main(){
    int a;
    int *pa=&a;

    int b;
    int *pb=&b;

    scanf("%d %d", pa, pb);
    // scanf("%d %d", &a, &b);

    printf("%d %d %d %d",*pa+*pb,*pa-*pb,(*pa)*(*pb),*pa/(*pb));
}