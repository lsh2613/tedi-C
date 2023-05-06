#include <stdio.h>

void get(double value, int* i_part, double* f_part){
    *i_part=(int)value;
    *f_part=value-*i_part;
}

int main(){

    double v=3.14;
    int i_part;
    double f_part;

    get(v, &i_part, &f_part);
    printf("정수부 = %d\n", i_part);
    printf("소수부 = %lf", f_part);
}