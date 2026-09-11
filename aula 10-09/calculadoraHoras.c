#include <stdio.h>
int main(){
    int horas, minutos, segundos;
    printf("Digite a quantidade de segundos: ");
    scanf("%d", &segundos);
    horas = segundos / 3600;
    minutos = (segundos % 3600) / 60;
    segundos = segundos % 60;
    printf("Horas: %.0d\n", horas);
    printf("Minutos: %.0d\n", minutos);
    printf("Segundos: %.0d\n", segundos);
}