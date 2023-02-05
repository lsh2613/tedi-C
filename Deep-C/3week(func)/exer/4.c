#include <stdio.h>

void arr(int k){
    int arr[k];

    for (int i = 0; i < k; i++)
    {
        arr[i]=i+1;
    }

    for (int i = 0; i < k; i++)
    {
        printf("%d", arr[i]);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    arr(n);
}