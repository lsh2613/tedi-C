#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    // 3 1 2
    if (a>=b && b>=c)
        printf("%d", a);
    
    // else if (a>=b && b>=c)
    //     printf("%d", a);
    // else if (a>=c && c>=b)
    //     printf("%d", a);

    else if (b>=a && a>=c)
        printf("%d", b);
    else
        printf("%d", c);   
     
     
}