#include <stdio.h>
#include <string.h>
int main(){

    char str[100];
    int c=0;
    int ab=0;
    
    scanf("%s", str);

    for (int i = 0; i < strlen(str)-2; i++)
    {
        if (str[i]=='c')
            c++;        
        if (str[i]=='a'&&str[i+1]=='b')
            ab++;        
    }
    
    if (c>0)
        printf("YES ");
    else
        printf("NO ");   

    if (ab>0)
        printf("YES ");
    else
        printf("NO ");    
}