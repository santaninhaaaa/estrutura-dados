#include <stdio.h>
#include <stdlib.h>

// Crie um algoritmo que solicite 10 números inteiros, armazene os números em um vetor e apresente: média, o maior e o menor. É necessário o uso de laço.

main()
{

    int num[10]; //vetor de 10 espaços
    int soma = 0; // vai somar os valores do vetor para a media
    int i; // inteiro pra contar no for

    int maior, menor;

    printf("\n Entre com 10 numeros inteiros: \n");

    scanf("%d", &num[0]); //ele vai leeer o primeiro numero q digitei
    soma = maior = menor = num[0];//quando for digitado o primeiro valor do vetor, vai ser guardado nessas variaveis

    for (i = 1; i < 10; i++)//começa em 1 pois armazenamos já o primeiro valor fora do escopo do for
    {
        scanf("%d", &num[i]); // vai armazenar todos os numeros
        soma = soma + num[i];//soma += num[i]; --- faz a soma do numero anterior com o q eu digitei, já na hora q digito ele faz a soma

        if (num[i] > maior){ maior = num[i]; }//se o numero q digitei agr, for maior q o q já está armazenado fora do loop permanece
        if (num[i] < menor){ menor = num[i]; }//se o numero q digitei agr, for menor q o q já está armazenado fora do loop permanece
    }

    float media = (float)soma / 10; // dividir pra ter média q será float
    //já q soma é inteiro o (float) faz ele se transformar em float

    printf("\n\nA media dos numeros digitados e -> %.2f \n\n", media);//%.2f é pra ser duas casas decimais apenas
    printf("O maior dos numeros digitados e -> %d \n\n", maior);
    printf("O menor dos numeros digitados e -> %d \n\n", menor);
}

/*
oq está acontecendo é >

o PRIMEIRO VALOR já é armazenado em soma, maior e menor

após isso, a cada momento q eu digito um numero, ele >
    * SOMA o antigo valor com o atual q digitei
    * COMPARA se o valor q eu digitei é maior OU menor 

*/