
#include <stdio.h>
#include <stdlib.h>

int main() {
    char palavra[100];
    printf("Insira uma palavra:\n");
    scanf("%s", palavra);
    printf("%s comeca com %c", palavra, palavra[0]);
    getchar();
    return 0;
}