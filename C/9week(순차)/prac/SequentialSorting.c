#include <stdio.h>
int main(){

    int b[]={5,3,8,1,2,7};
    int tmp = 0;

    for (int i = 0; i < 6; i++)
    {
        for (int j = i+1; j < 6; j++)
        {
            if (b[i] > b[j])
            {
                tmp = b[i];
                b[i] = b[j];
                b[j] = tmp;
            }
        }
    }
    for (int i = 0; i < 6; i++)
    {
        printf("%2d", b[i]);
    }
    
}