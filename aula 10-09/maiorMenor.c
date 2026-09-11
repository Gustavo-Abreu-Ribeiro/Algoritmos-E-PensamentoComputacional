#include <stdio.h>
int main(){
    int nums[999], maior, menor, numeros;

    printf("Quantos numeros voce deseja inserir? ");
    scanf("%d", &numeros);

    for (int i = 0; i <numeros ; i++)
    {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &nums[i]);
    }
    maior = nums[0];
    menor = nums[0];
    for (int i = 1; i < numeros; i++)
    {
        if (nums[i] > maior)
        {
            maior = nums[i];
        }
        if (nums[i] < menor)
        {
            menor = nums[i];
        }
    }
    printf("O maior numero eh: %d\n", maior);
    printf("O menor numero eh: %d\n", menor);
}