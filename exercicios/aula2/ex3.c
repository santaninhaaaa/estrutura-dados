#include <stdio.h>
#include <stdlib.h>

// Faça um programa utilizando funções que leia 10 números do usuário e faça o teste de número par ou ímpar dos números digitados. Crie dois vetores e armazene os números pares no primeiro vetor e os números ímpares no segundo vetor.

main()
{
    int contpar = 0, contimpar = 0;
    int vet[10], par[10], impar[10], i;
    printf("Digite aqui 10 numeros:\n");

    for (i=0;i<10;i++){
        scanf("%d", &vet[i]);

        if (vet[i]%2 == 0){ par[contpar] = vet[i]; contpar++; }
        else { impar[contimpar] = vet[i]; contimpar++; }
    }

    printf("\nNumeros pares > ");
    for (i=0; i<contpar; i++){
        printf(" %d |", par[i]);
    }

    printf("\nNumeros impares > ");
    for (i=0; i<contimpar; i++){
        printf(" %d |", impar[i]);
    }
    
}