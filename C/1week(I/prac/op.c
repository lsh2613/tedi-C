#include <stdio.h>
int main(){

    int x, y, result;
    scanf("%d %d", &x, &y);

    result=x/y;
    printf("%d / %d = %d\n", x,y,x/y);
    result=x%y;
    printf("%d %% %d = %d\n", x,y,x%y);

    printf("=======================\n");

    float a, b, res;
    scanf("%f %f", &a, &b);
    
    res=a/b;
    printf("%f / %f = %f\n", a,b,a/b);
    // result=a%b;
    // printf("%f %% %f = %f\n", x,y,x%y);
}