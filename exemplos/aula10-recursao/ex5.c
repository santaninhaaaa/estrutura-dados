#include <stdio.h>
#include <stdlib.h>

main(){
    int **mat;
    int lin = 4, col = 4;
    int x, y;

    //vetor de lin, ponteiros para linhas
    mat = (int **) malloc (lin * sizeof(int*));

    //aloca cada uma das linhas (vetores de col inteiros)
    for (x = 0; x < lin; x++){
        mat[x] = (int *) malloc (col * sizeof (int));
    }
    //percorre a matriz
    for (x = 0; x < lin; x++){
        for(y = 0; y < col; y++){
            mat[x][y] = 0;
            printf("%d ", mat[x][y]); //acesso com sintaxe mais simples
        }
        printf("\n");
    }

    //libera a memória da matriz
    for (x = 0; x < lin; x++){
        free(mat[x]);
    }

    free(mat);

}