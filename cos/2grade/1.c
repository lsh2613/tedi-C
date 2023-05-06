#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int* solution(char* shirt_size[], int shirt_size_len){
    int *shirt_cnt = (int*)malloc(sizeof(int)*6);
    // int shirt_cnt[6]={0};

    for(int i = 0; i < 6; ++i)
        shirt_cnt[i] = 0;

    for (int i = 0; i < shirt_size_len; i++)
    {
        if (strcmp(shirt_size[i], "XS")==0)
            shirt_cnt[0]++;
        if (strcmp(shirt_size[i], "S")==0)
            shirt_cnt[1]++;     
        if (strcmp(shirt_size[i], "M")==0)
            shirt_cnt[2]++; 
        if (strcmp(shirt_size[i], "L")==0)
            shirt_cnt[3]++; 
        if (strcmp(shirt_size[i], "XL")==0)
            shirt_cnt[4]++; 
        if (strcmp(shirt_size[i], "XXL")==0)
            shirt_cnt[5]++;     
    }
    return shirt_cnt;
}

int main(){

    char (*s_s)[6]={"XS","S",'L', 'L', "XL",'S'};
    int s_l = 6;
    int s_cnt[6]=(void *)solution(s_s, s_l);
}