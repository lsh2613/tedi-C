#include <stdio.h>
#include <stdlib.h>
int main(){
    float *f=(float *)malloc(sizeof(float));
    scanf("%f", f);
    int n=*f;
    *f=*f-n;
}