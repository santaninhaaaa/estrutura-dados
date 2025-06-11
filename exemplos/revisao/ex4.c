/*
Faça um programa que leia dois vetores numéricos de 8 posições e faça a 
multiplicação dos valores de mesmo índice, colocando o resultado em um 
arquivo texto.
*/
#include <stdio.h>


main(){

    int v1[8];
    int v2[8];
    int mu[8];

    printf("Digite OITO numeros pro vetor 1\n");

    for(int i = 0; i < 8; i++){
        scanf("%d", &v1[i]);
    }

    printf("Digite OITO numeros pro vetor 2\n");

    for(int i = 0; i < 8; i++){
        scanf("%d", &v2[i]);
    }

    FILE *arquivo;
    arquivo = fopen("!mult.txt", "w");
    if(arquivo == NULL){printf("IMPOSSIVEL ABRIR");}

    for(int i = 0; i < 8; i++){
        mu[i] = v1[i] * v2[i];

        fprintf(arquivo, "%d x %d = %d\n", v1[i], v2[i], mu[i]);

    }

}