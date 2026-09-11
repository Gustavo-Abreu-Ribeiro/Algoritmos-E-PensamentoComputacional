#include <stdio.h>

int main(){
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    if(num % 2 == 0){
        printf("O dobro de %d eh %d\n", num, num * 2);
    }else{
        printf("O triplo de %d eh %d\n", num, num * 3);
    }
    return 0;
}