#include <stdio.h>
#include <string.h>
int main(){

    char str1[10];
    char str2[10];
    scanf("%s", str1);
    scanf("%s", str2);

    int n=strcmp(str1,str2);

    if (n<0)
        printf("%s가 %s보다 앞에 있습니다",str1,str2);
    if (n==0)
        printf("%s와 %s는 같은 문자열입니다",str2,str1);
    if (n>0)
        printf("%s가 %s보다 앞에 있습니다",str2,str1);

}