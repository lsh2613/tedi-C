#include <stdio.h>
int main(){
    char str1[30]="이승헌";
    char str2[]="이승헌";
    char str3[30];

    str3="이승헌";
    str3[30]="이승헌";

    printf("%s", str1);
    printf("%s", str2);
}