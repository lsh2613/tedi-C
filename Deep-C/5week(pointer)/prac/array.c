#include <stdio.h>
int main(){

    int a[]={10,20,30,40,50};
    int *p;
    
    // int *arr = {10, 20, 30};

    p=a;
    
    printf("a[0]=%d a[1]=%d a[2]=%d\n", a[0],a[1],a[2]);
    printf("p[0]=%d p[1]=%d p[2]=%d\n\n", p[0],p[1],p[2]);

    printf("*a=%d *a+1=%d *a+2=%d\n", *a, *(a+1), *(a+2));
    printf("*p=%d *p+1=%d *p+2=%d\n\n", *p, *(p+1), *(p+2));

    printf("&a[0]=%p &a[1]=%p &a[2]=%p\n", &a[0],&a[1],&a[2]);
    printf("&p[0]=%p &p[1]=%p &p[2]=%p\n", &p[0],&p[1],&p[2]);

}