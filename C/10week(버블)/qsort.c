#include <stdio.h>
#include <stdlib.h>

int compare(const void *first, const void *second){
    if(*(int*)first > *(int*)second)
        return 1;
    if(*(int*)first < *(int*)second)
        return -1;
    else
        return 0;
}

int main(){

    int arr[5] = {3,4,1,5,2};
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    qsort(arr, sizeof(arr)/sizeof(int), sizeof(int), compare);

    for (int i = 0; i < 5; i++)
        {
            printf("%d ", arr[i]);
        }
}