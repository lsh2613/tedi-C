#include <stdio.h>
#include <stdlib.h>
int main(){

    int n;
    scanf("%d", &n);

    int me[n], com[n];
    int sumOfMe=0;
    int sumOfCom=0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &me[i]);
        sumOfMe+=me[i];

        com[i]=rand()%10+1;
        sumOfCom+=com[i];
    }

    printf("%d", sumOfCom>sumOfMe ?sumOfCom-sumOfMe:sumOfMe-sumOfCom);
    

}