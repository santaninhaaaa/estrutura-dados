#include <stdio.h>

//Faça um algoritmo utilizando a linguagem C que preencha um vetor com 10 números. Em seguida, o usuário digita um número que deve ser comparado com o vetor preenchido. Caso o número seja encontrado, mostra a posição do número no vetor, caso não seja encontrado, emita uma mensagem de número não encontrado.

main(){

    int v[10],i,n;

    printf("Complete o vetor de 10 valores:\n");

    for(i=0;i<10;i++){
        scanf("%d", &v[i]);
    }

    printf("Agora digite um valor:\n");
    scanf("%d", &n);

    for(i=0;i<10;i++){
        if (n == v[i]){
            printf("O valor digitado %d, se encontra na posicao %d do vetor", n,i);
        }

        if (n != v[i]){
            printf("O valor digitado nao existe no vetor");
        }
    }


}