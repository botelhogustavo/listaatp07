
#include <stdio.h>
#include <stdlib.h>

int main() {
    int vetorA[5], vetorB[5];

    for(int i = 0; i < 5; i++) {
        printf("Insira o valor numero %d do vetor A: ", i);
        scanf("%d", &vetorA[i]);
    }
    for(int j = 0; j < 5; j++) {
        printf("Insira o valor numero %d do vetor B: ", j);
        scanf("%d", &vetorB[j]);
    }

    for(int k = 0; k < 5; k++){
        printf("A[%d] = %d\t", k, vetorA[k]);
        printf("B[%d] = %d\t", k, vetorB[k]);
    }
    getchar();
    return 0;
}