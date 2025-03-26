#include <stdio.h>

//Faça algoritmo utilizando a linguagem C, que faça a soma das matrizes A e B, adicionando os elementos correspondentes: (A + B)[i,j] = A[i, j] + B[i,j]. Você pode definir o tamanho da matriz e o usuário deve alimentar as duas matrizes com valores. É necessário usar laço.

/*
1 3 2   0 0 5   1 3 7
1 0 0 + 7 5 0 = 8 5 0
1 2 2   2 1 1   3 3 3
*/

main(){

    int A[3][3];
    int B[3][3];
    int C[3][3];
    int x,y,v;

    printf("Por favor, digite 9 valores para a matriz A, lembrando que os valores sao guardados de linha por linha\n");

    for(x=0;x<3;x++){
        for(y=0;y<3;y++){
            scanf("%d", &A[x][y]);
        }
    }

    printf("Agora, digite 9 valores para a matriz B, lembrando que os valores sao guardados de linha por linha\n");

    for(x=0;x<3;x++){
        for(y=0;y<3;y++){
            scanf("%d", &B[x][y]);
        }
    }

    for(x=0;x<3;x++){
        for(y=0;y<3;y++){
            C[x][y] = A[x][y] + B[x][y];
        }
    }

    printf("O resultado da soma de ambas matrizes fica:\n");


    for(x=0;x<3;x++){
        printf("\n");
        for(y=0;y<3;y++){
            printf("%d ", A[x][y]);
        }
    }

    printf(" + ");

    for(x=0;x<3;x++){
        printf("\n");
        for(y=0;y<3;y++){
            printf("%d ", B[x][y]);
        }
    }

    printf(" = ");

    for(x=0;x<3;x++){
        printf("\n");
        for(y=0;y<3;y++){
            printf("%d ", C[x][y]);
        }
    }

}