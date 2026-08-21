#include <stdio.h>

int main(){
    float salario, emprestimo, prestacao;
    printf("Digite o salario do funcionario: ");
    scanf("%f", &salario);
    printf("Digite o valor da prestacao: ");
    scanf("%f", &prestacao);

    if (prestacao > (salario * 0.2)) {
        printf("Emprestimo nao concedido.\n");
    } else {
        printf("Emprestimo concedido.\n");
    }
    return 0;
}