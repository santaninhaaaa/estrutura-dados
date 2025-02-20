#include <stdio.h>
#include <stdlib.h>

// Crie um algoritmo que solicite 10 números inteiros, armazene os números em um vetor e apresente: média, o maior e o menor. É necessário o uso de laço.

main(){

    int num[10], soma = 0; //vetor de 10 e soma dos valores no vetor

    int i; //inteiro pra contar no for
    printf ("\n Entre com 10 numeros inteiros \n");

    for(i=0; i<10; i++){
        scanf ("%d", &num[i]);//vai armazenar
        soma = soma + num[i];
    }

    float media = soma / 10;//média q será float

    printf("\n\n A media dos numeros digitados sao: ");
    printf("%f", media);
}