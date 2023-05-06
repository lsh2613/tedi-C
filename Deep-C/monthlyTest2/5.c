#include <stdio.h>

void myFunc(int *a, int *b){
    int abs_a = *a>0? *a:-*a; 
    int abs_b = *b>0? *b:-*b; 

    if (abs_a>abs_b)
        *b=0;
    else
        *a=0;
}

int main(){
    int a=8,b=-3;
    myFunc(&a,&b);
    printf("a=%d   b=%d", a,b);

}