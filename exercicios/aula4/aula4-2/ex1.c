#include <stdio.h>

//Faça um algoritmo utilizando a linguagem C, que carregue uma matriz 3x3 com números inteiros. Depois solicite que o usuário entre com um número. Verifique se o número digitado se encontra na matriz, se sim, mostre qual a posição. Depois calcule e mostre quantos elementos dessa matriz são maiores que o número digitado pelo usuário.

main(){

    int M[3][3],x,y,n,i=0;

    printf("Complete essa matriz de tamanho 3x3, 9 numeros:\n");

    for(x=0;x<3;x++){
        for(y=0;y<3;y++){
            scanf("%d", &M[x][y]);
        }
    }

    printf("Agora digite qualquer numero:");
    scanf("%d", &n);

    for(x=0;x<3;x++){
        printf("\n");
        for(y=0;y<3;y++){

            printf("%d ", M[x][y]);

        }
    }

    for(x=0;x<3;x++){
        for(y=0;y<3;y++){

            if(n == M[x][y]){
                printf("\nO numero consta na matriz, posicao x=%d; y=%d", x,y);
        
            }
            if(M[x][y] > n){
                i++;
            }
        }
    }

    printf("\nTemos o total de %d numeros maiores que %d na matriz\n", i, n);
}