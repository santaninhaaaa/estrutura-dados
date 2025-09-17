// Implemente um algoritmo para alocar dinamicamente uma matriz (de inteiros) de dimensões definidas pelo usuário e a preencha. Na sequência, implemente uma função que receba um valor, retorne 1 caso o valor esteja na matriz ou retorne zero caso não esteja na matriz.

#include <stdio.h>
#include <stdlib.h>

int buscar(int valor, int **matriz, int linha, int coluna){
    for(int x=0;x<coluna;x++){
        for(int y=0;y<linha;y++){
            if (matriz[x][y] == valor){
                return 1;
            }
        }
    }
    return 0;
}

main(){
    int **matriz;
    int linha,coluna,x,y,valor;

    printf("Dimensões da Matriz -------\n");
    printf("Digite quantas colunas tera a matriz: ");
    scanf("%d", &linha);

    printf("Digite quantas linhas tera a matriz: ");
    scanf("%d", &coluna);

    matriz = (int **) malloc (coluna * sizeof(int*));

    for(x=0; x<coluna; x++){
        matriz[x] = (int *) malloc(linha * sizeof(int));
    }

    printf("Vamos preencher a matriz!\n\n");
    for (x=0; x<coluna; x++){
        printf("Linha %d\n", x+1);
        for(y=0; y<linha; y++){
            printf("Valor da Matriz[%d][%d]: ", x,y);
            scanf("%d", &matriz[x][y]);
        }
        printf("\n");
    }

    for (x=0; x<coluna; x++){
        for(y=0; y<linha; y++){
            printf("%d ", matriz[x][y]);
        }
        printf("\n");
    }

    printf("Digite um valor: ");
    scanf("%d", &valor);

    if(buscar(valor, matriz, linha, coluna)){
        printf("Foi encontrado o valor na matriz!\n");
    } else {
        printf("Nao foi encontrado o valor na matriz!\n");
    }

    for (x=0; x<coluna; x++){
        free(matriz[x]);
    }

    free(matriz);

}