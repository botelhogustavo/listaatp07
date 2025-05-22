#include <stdio.h>
#include <stdlib.h>

int esta(int *a, int x, int t) {
    for (int i = 0; i < t; i++) {
        if (*(a + i) == x)  // acessa o elemento via ponteiro
            return 1;
    }
    return 0;
}

int main() {
    int vetor[5] = {1, 2, 3, 4, 5};

    if (esta(vetor, 3, 5)) {
        printf("Elemento encontrado.\n");
    } else {
        printf("Elemento não encontrado.\n");
    }

    return 0;
}
