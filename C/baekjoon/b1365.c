#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int cnt=0;
    for (int i = 1; i <= n; i++)
    {
        if (i==1 || i==n)
        {
            for (int j = 0; j < n; j++)
            {
                printf("*");
            }
        }

        else{
            printf("*");

            for (int j = 0; j < n-2; j++)
            {
                if(j==cnt || cnt+j==n-3)
                    printf("*");
                else
                    printf(" ");    
            }
            cnt++;
            printf("*");
        }    
        printf("\n");    
    }
    
}