#include <stdio.h>

//Faça um algoritmo utilizando a linguagem C que preencha um vetor com 10 números. A seguir trocar o primeiro elemento com o último, o segundo com penúltimo até o quinto com o sexto e escrever o vetor modificado.


main(){

    int v[10],i,valor;

    printf("Complete o vetor de 10 valores:\n");

    for(i=0;i<10;i++){
        scanf("%d", &v[i]);
    }

    for(i=0;i<5;i++){
        valor = v[i];
        v[i] = v[9-i];
        v[9-i] = valor;
    }

    printf("Vetor modificado:\n");
    for(i=0;i<10;i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}