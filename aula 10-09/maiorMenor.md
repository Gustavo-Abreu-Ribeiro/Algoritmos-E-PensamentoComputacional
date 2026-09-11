# maiorMenor

Portugol (Portugol Studio):

```portugol
programa
{
    funcao inicio()
    {
        inteiro nums[3], maior, menor

        escreva("Digite o primeiro numero: ")
        leia(nums[0])
        escreva("Digite o segundo numero: ")
        leia(nums[1])
        escreva("Digite o terceiro numero: ")
        leia(nums[2])

        maior = nums[0]
        menor = nums[0]

        para (inteiro i = 1; i < 3; i++)
        {
            se (nums[i] > maior)
            {
                maior = nums[i]
            }
            se (nums[i] < menor)
            {
                menor = nums[i]
            }
        }

        escreva("O maior numero eh: ", maior, "\n")
        escreva("O menor numero eh: ", menor, "\n")
    }
}
```
