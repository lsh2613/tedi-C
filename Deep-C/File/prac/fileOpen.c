#include <stdio.h>
int main(){

    FILE *fp =NULL;
    fp=fopen("test.text", "w");
    if (fp==NULL)
    {
        printf("파일 열기 실패.");
    }
    else
        printf("파일 열기 성공");
    
}