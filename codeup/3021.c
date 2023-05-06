#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int s1[300];
int s2[300];
int cur = 0;

void init(int *s);
void push(int *s, int n);
void pop(int *s);
void printStack(int *s);

void init(int *s){
    s = (int*)malloc(sizeof(int)*10);
}

void push(int *s, int n){
    s[cur]=n;
    cur++;
}

void pop(int *s){
    if (cur == 0)
    {
        return;
    }
    else{
        s[cur-1]=0;
        cur--;
    }
}

void printStack(int *s){
    for (int i = cur-1; i >= 0; i--)
    {
        printf("%d S의 값 : %d\n", i, s[i]);
    }
}

int main(){

    char str1[300];
    char str2[300];
    scanf("%s %s", str1, str2);
    init(s1);
    init(s2);

    if (strlen(str1)>strlen(str2))
    {
        for (int i = 0; i < strlen(str1); i++)
        {
            push(s1,atoi(str1[i]));
        }
        for (int i = 0; i < strlen(str2); i++)
        {
            push(s2,atoi(str2[i]));
        }
    }
    if (strlen(str1)<strlen(str2))
    {
        for (int i = 0; i < strlen(str2); i++)
        {
            push(s1,atoi(str2[i]));
        }
        for (int i = 0; i < strlen(str1); i++)
        {
            push(s2,atoi(str1[i]));
        }
    }
    
    for (int i = 0; i < strlen(); i++)
    {
        /* code */
    }
    
    
}