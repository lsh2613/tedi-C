#include <stdio.h>
int main(){
    
    int n;
    scanf("%d", &n);
    int first[n];
    int second[n];

    int sumOfFirst=0;
    int sumOfSecond=0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &first[i]);
        sumOfFirst=first[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &second[i]);
        sumOfSecond=second[i];
    }
    
    printf(sumOfFirst < sumOfSecond? "1" : "2");
}