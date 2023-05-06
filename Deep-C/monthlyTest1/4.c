#include <stdio.h>

void myPrint(int n){
    //방법1
    if (n==0)
        return;
    else{
        printf("%d\n", n);
        myPrint(n-1);    
    }

    //방법2
    if (n>=1)
    {
        printf("%d\n", n);
        myPrint(n-1);
    }
    
}

int main(){
    int n;
    scanf("%d", &n);
    myPrint(n);
}