#include <stdio.h>
#include <stdlib.h>

//Escreva um programa que contenha um vetor de float com 10 elementos. Imprima o endereço de cada posição do vetor.

main(){

   float v[10], *pv[10];

    printf("Preencha o vetor com 10 valores\n");

    for (int i = 0; i < 10; i++){
        scanf("%f", &v[i]);
        pv[i] = &v[i];  
    }

    for (int i = 0; i < 10; i++){
    printf("%.2f tem endereco %p\n", v[i], pv[i]);
    }

}