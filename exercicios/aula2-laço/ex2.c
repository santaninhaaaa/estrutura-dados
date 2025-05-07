#include <stdio.h>
#include <stdlib.h>

//Faça um algoritmo que leia uma quantidade de números determinada pelo usuário, armazene os números em um vetor e apresente depois o maior e o menor número.

main()
{

    int tam, i, maior, menor;
    printf("Digite o tamanho do vetor desejado: ");
    scanf("%d", &tam);
    int vet[tam];

    printf("Digite os valores pra preencher o vetor com %d espacos:\n", tam);
    scanf("%d", &vet[0]);
    maior = menor = vet[0];

    for (i=1;i<tam;i++){
        
        scanf("%d", &vet[i]);
        if (vet[i] > maior){ maior = vet[i]; }
        if (vet[i] < menor){ menor = vet[i]; }
    }

    printf("O maior numero > %d\nO menor numero > %d\n", maior, menor);

}