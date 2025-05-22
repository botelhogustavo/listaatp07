#include <stdio.h>
#include <stdlib.h>

void comum(int a[], int b[], int t) {
    printf("valores comuns:\n");
    for (int i = 0; i < t; i++) {
        if (a[i] == b[i]) {
            printf("%d ", a[i]);
        }
    }
    printf("\n");
}

int main() {
    int A[4] = {1, 2, 3, 4};
    int B[4] = {4, 2, 3, 1};

    comum(A, B, 4);

    return 0;
}
