/*  
Implemente um algoritmo para ler dois números n e m e: 
- Aloque de forma dinâmica e leia uma matriz de inteiros n X m.
- Localize os três maiores números da matriz e mostre a linha e a coluna onde 
estão.
*/

#include <stdio.h>
#include <stdlib.h>

main(){
    int **mat;
    int m,n,v;

    printf("Digite o valor de N: ");
    scanf("%d", &n);

    printf("Digite o valor de M: ");
    scanf("%d", &m);

    mat = (int **) malloc (n * sizeof(int*));

    for(int x=0;x<n;x++){
        mat[x] = (int *) malloc (m * sizeof(int));
    }


    printf("Vamos preencher a matriz!\n\n");
    for (int x=0; x<n; x++){
        printf("Linha %d\n", x+1);
        for(int y=0; y<m; y++){
            printf("Valor da Matriz[%d][%d]: ", x,y);
            scanf("%d", &mat[x][y]);
            v = mat[x][y];
        }   
        printf("\n");
    }

    for (int x=0; x<n; x++){
        for(int y=0; y<m; y++){
            printf("%d ", mat[x][y]);
        }
        printf("\n");
    }

    


}
