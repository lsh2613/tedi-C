#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    
    switch (n)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("%d월은 31일입니다.",n);
            break;
        case 2:
            printf("%d월은 28일입니다.",n);
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("%d월은 30일입니다.",n);
            break;
    }
}