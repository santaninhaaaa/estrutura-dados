#include <stdio.h>

//Faça um algoritmo utilizando a linguagem C, que carregue uma matriz 4x3 com números inteiros. Depois solicite que o usuário entre com um número. Caso exista o número que o usuário digitou na matriz substitua pelo número zero, substituir pelo número -1 os números da matriz que são menores que o número digitado e substituir pelo número 1 os números da matriz que são maiores que o número digitado pelo usuário. Após as substituições mostre na tela toda a matriz alterada.

main(){

    int M[4][3],x,y,n;

    printf("Complete essa matriz de tamanho 4x3, 12 numeros:\n");

    for(x=0;x<4;x++){
        for(y=0;y<3;y++){
            scanf("%d", &M[x][y]);
        }
    }

    printf("Agora digite qualquer numero:");
    scanf("%d", &n);

    for(x=0;x<4;x++){
        printf("\n");
        for(y=0;y<3;y++){

            printf("%2d ", M[x][y]);

        }
    }

    for(x=0;x<4;x++){
        for(y=0;y<3;y++){

            if(n == M[x][y]){
                M[x][y] = 0;
            }else if(M[x][y] < n){
                M[x][y] = -1;
            }else if(M[x][y] > n){
                M[x][y] = 1;
            }
        }
    }

    printf("\nMatriz com valores substituidos");
    for(x=0;x<4;x++){
        printf("\n");
        for(y=0;y<3;y++){

            printf("%2d ", M[x][y]);

        }
    }
}