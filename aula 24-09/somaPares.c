#include <stdio.h>
int main() {
    int numeros[20], somaPares = 0, i = 0;
    printf("A soma de todos os numeros pares de um vetor de 20 elementos\n");

    do {
        numeros[i] = i + 1;
        if (numeros[i] % 2 == 0) {
            somaPares += numeros[i];
        }
        i++;
    } while (i < 20);
    printf("Soma dos numeros pares: %d\n", somaPares);
 
    return 0;
}