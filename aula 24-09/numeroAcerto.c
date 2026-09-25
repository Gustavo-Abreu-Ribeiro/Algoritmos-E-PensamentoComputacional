#include <stdio.h>
int main(){
    int tentativas = 10, tentativaAtual = 0, numeroSecreto = 42, chute;
    printf("Tente adivinhar um numero de 1 a 100 em %d tentativas\n", tentativas);

    do {
        printf("Digite seu chute: ");
        scanf("%d", &chute);
        tentativaAtual++;

        if (chute < numeroSecreto) {
            printf("O numero secreto e maior que %d\n", chute);}
        else if (chute > numeroSecreto) {
            printf("O numero secreto e menor que %d\n", chute);}
        else {
            printf("Parabens! Voce acertou o numero secreto!\n");
            break;
        }

        if (tentativaAtual == tentativas) {
            printf("Suas tentativas acabaram! O numero secreto era %d\n", numeroSecreto);
        }

    } while (tentativaAtual < tentativas);

    return 0;
}