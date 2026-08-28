#include <stdio.h>
int main(){
    float tamanhoParede, litroLata = 18, rendimentoLitro = 3, quantidadeLatas, precoLata = 80.0, precoTotal;
    printf("Digite o tamanho da parede em metros quadrados: ");
    scanf("%f", &tamanhoParede);
    quantidadeLatas = tamanhoParede / (litroLata * rendimentoLitro);
    if (quantidadeLatas < 1) {
        quantidadeLatas = 1;
    } else {
        quantidadeLatas = (int)quantidadeLatas + 1;
    }
    precoTotal = quantidadeLatas * precoLata;
    printf("Quantidade de latas necessarias: %.0f\n", quantidadeLatas);
    printf("Preco total: R$ %.2f\n", precoTotal);
    return 0;
}