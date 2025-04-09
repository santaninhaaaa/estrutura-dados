#include <stdio.h>
#include <stdlib.h>

/*Verificação de Número Par ou Ímpar: Escreva um programa que solicite um número inteiro ao usuário e utilize uma estrutura if-else para determinar se o número é par ou ímpar.​*/

main(){

    int n;
    printf("Por favor! Digite um numero\n");
    scanf("%d", &n);

    if (n%2 == 0){
        printf("%d e par\n", n);
    } else { printf("%d e impar\n"); }

}