#include <stdio.h>
int main(){
    // strcpy를 써서 문자열을 초기화 해야하는 이유를 
    // 알려주기 위해 안되는 예시를 보여줌

    // 되는 예
    char str1[30]="이승헌";  
    char str2[]="이승헌";

    // 안 되는 예
    char str3[30];
    str3="이승헌";
    str3[30]="이승헌";

    printf("%s", str1);
    printf("%s", str2);
}