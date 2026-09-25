#include <stdio.h>
int main() {
	int numero, quantidade = 0;
	int soma = 0;

	do {
		printf("Digite um numero (0 para terminar): ");
		scanf("%d", &numero);

		if (numero != 0 && numero % 2 != 0) {
			soma += numero;
			quantidade++;
		}
	} while (numero != 0);

	if (quantidade > 0) {
		printf("Media dos numeros impares: %.2f\n", (float)soma / quantidade);
	} else {
		printf("Nenhum numero impar foi digitado.\n");
	}

	return 0;
}