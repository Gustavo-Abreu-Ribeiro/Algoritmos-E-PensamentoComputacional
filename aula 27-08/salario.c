#include <stdio.h> 

int main(){
    float salarioHora = 10.25;
    float horasTrabalhadas;

    printf("Digite o numero de horas trabalhadas: ");
    scanf("%f", &horasTrabalhadas);

    float salario = salarioHora * horasTrabalhadas;

    printf("O salario eh: R$ %.2f\n", salario);

    return 0;
}