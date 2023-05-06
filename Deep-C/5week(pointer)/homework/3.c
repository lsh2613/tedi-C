#include <stdio.h>
#include <math.h>

void quad(int a, int b, int c, double* xplus, double* xminus ){
    *xminus = (-b -sqrt(b*b-4*a*c))/(2*a);
    *xplus = (-b +sqrt(b*b-4*a*c))/(2*a);
}

int main(){

    int a=1;
    int b=4;
    int c=3;
    double xplus, xminus;
    quad(a,b,c, &xplus, &xminus);

    printf("첫 번째 실근은 %lf\n", xplus);
    printf("두 번째 실근은 %lf\n", xminus);

}