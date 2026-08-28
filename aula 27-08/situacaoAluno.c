#include <stdio.h>

int main(void) {
    float mediaMinima = 7.0;
    float toleranciaFaltas = 15.0;
    float somaNotas = 0.0;
    float nota;
    float cargaHoraria;
    float faltas;
    float media;
    float percentualFaltas;

    printf("Digite as 5 notas do aluno:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%f", &nota);
        somaNotas += nota;
    }

    printf("Digite a carga horaria total do curso: ");
    scanf("%f", &cargaHoraria);
    printf("Digite a quantidade de faltas: ");
    scanf("%f", &faltas);

    if (cargaHoraria <= 0.0 || faltas < 0.0 || faltas > cargaHoraria) {
        printf("Dados invalidos. Informe uma carga horaria positiva e faltas validas.\n");
        return 1;
    }

    media = somaNotas / 5.0;
    percentualFaltas = (faltas / cargaHoraria) * 100.0;

    printf("Media: %.2f\n", media);
    printf("Percentual de faltas: %.2f%%\n", percentualFaltas);

    if (media >= mediaMinima && faltas <= cargaHoraria * toleranciaFaltas / 100.0f) {
        printf("Situacao: aprovado.\n");
    } else {
        printf("Situacao: reprovado.\n");
        if (media < mediaMinima) {
            printf("Motivo: media abaixo de %.1f.\n", mediaMinima);
        }
        if (percentualFaltas > toleranciaFaltas) {
            printf("Motivo: faltas acima de %.0f%%.\n", toleranciaFaltas);
        }
    }

    return 0;
}