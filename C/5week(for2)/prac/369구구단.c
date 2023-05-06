#include<stdio.h>
int main(){
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 3; j <= 9; j+=3)
        {
            printf("%d * %d = %2d ",j,i,i*j);
        }
        printf("\n");
    }
    
}