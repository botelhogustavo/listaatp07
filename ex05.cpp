#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

void inverter(int a[], int t) {
    int *inicio = a;        // aponta para o primeiro elemento
    int *fim = a + t - 1;   // aponta para o ultimo elemento

    while (inicio < fim) {
        int temp = *inicio;
        *inicio = *fim;
        *fim = temp;

        inicio++;  
        fim--;     
    }
}

int main() {
    int vetor[] = {1, 2, 3, 4, 5};
    int tamanho = 5;

    inverter(vetor, tamanho);

    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
