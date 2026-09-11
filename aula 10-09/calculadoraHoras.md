# calculadoraHoras

Portugol (Portugol Studio):

```portugol
programa
{
    funcao inicio()
    {
        inteiro horas, minutos, segundos

        escreva("Digite a quantidade de segundos: ")
        leia(segundos)

        horas = segundos / 3600
        minutos = (segundos % 3600) / 60
        segundos = segundos % 60

        escreva("Horas: ", horas, "\n")
        escreva("Minutos: ", minutos, "\n")
        escreva("Segundos: ", segundos, "\n")
    }
}
```
