#include <stdio.h>
int main(){

    int a[6]={5,7,3,8,1,2};
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (a[j]>a[j+1])
            {
                int tmp=a[j];
                a[j]=a[j+1];
                a[j+1]=tmp;
            }
        }
    }
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", a[i]);
    }
        
}