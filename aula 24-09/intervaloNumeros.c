#include <stdio.h>

int main() {
    int primeiro, segundo, numero;

    printf("Digite dois numeros inteiros: ");
    if (scanf("%d %d", &primeiro, &segundo) != 2) {
        printf("Entrada invalida.\n");
        return 1;
    }

    if (primeiro > segundo) {
        numero = primeiro;
        primeiro = segundo;
        segundo = numero;
    }

    printf("Numeros no intervalo: ");
    numero = primeiro + 1;

    while (numero < segundo) {
        printf("%d", numero);
        numero++;

        if (numero < segundo) {
            printf(", ");
        }
    }

    printf("\n");
    return 0;
}
