#include <stdio.h>
int main(){
    int a=3;
    int *p;
    p=&a;
    
    printf("a의 주소 %p\n", &a);
    printf("포인터 p의 주소 %p\n", p);
    
    printf("a의 값 %d\n", a);
    printf("포인터 p가 가리키는 값%d\n", *p);
}