#include <stdio.h>
int main(){
    int a,b;
    char op;

    int *pa = &a;
    int *pb = &b;
    char *pop = &op;
    
    scanf("%d %c %d", pa, pop, pb);

    switch (*pop)
    {
    case '+':
        printf("%d", *pa+*pb);
        break;
    case '-':
        printf("%d", *pa-*pb);
    default:
        break;
    }
}