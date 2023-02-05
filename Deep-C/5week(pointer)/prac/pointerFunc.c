#include <stdio.h>

void modify1(int val){
    val=99;
}
void modify2(int *val){
    *val=99;
}
int main(){

    int num1 = 1;
    modify1(num1);
    printf("%d\n", num1);

    int num2 = 1;
    modify2(&num2);
    printf("%d\n", num2);
}