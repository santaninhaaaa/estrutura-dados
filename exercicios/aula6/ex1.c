#include <stdio.h>

// Faça um programa utilizando funções que leia uma vetor de 5 números inteiros, depois imprime o vetor normal e o vetor invertido. Utilize funções para ler, imprimir e imprimir invertido os números do vetor.

void ler_v(int a[5]){
    printf("Escreva cinco numeros inteiros\n");
    for(int i = 0; i<5; i++){
        scanf("%d", &a[i]);
    }
}

int v_normal(int a[5]){
    for(int i=0; i<5; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}

int v_invertido(int a[5]){
    for(int i=4; i>=0; i--){
        printf("%d ", a[i]);
    }
    printf("\n");
}

main(){

    int v[5];

    ler_v(v);
    v_normal(v);
    v_invertido(v);

}