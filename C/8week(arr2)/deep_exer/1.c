#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n][n];
    int num = 1;

    // 2차원 배열 생성
    for (int j=0; j<n; j++) {
        if (j % 2 == 0) {
            for (int i=0; i<n; i++) {
                arr[i][j] = num++;
            }
        }
        else {
            for (int i=n-1; i>=0; i--) {
                arr[i][j] = num++;
            }
        }
    }

    // 배열 출력
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}