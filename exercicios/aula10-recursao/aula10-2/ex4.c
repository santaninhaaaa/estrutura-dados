// Implemente um algoritmo para ler um vetor alocado dinamicamente. O  usuário irá digitar uma sequência de números, sem limite de quantidade. Os números serão digitados um a um e, caso deseje encerrar a entrada de dados, o usuário precisa digitar o número 0. Inicie com um vetor de tamanho 10  alocado dinamicamente. Caso o vetor alocado esteja cheio, aumente o vetor  com mais 10 posições.

#include <stdio.h>
#include <stdlib.h>

main(){

    int *v;
    int tam = 10;
    int i = 0;

    printf("Digite valores dando Enter:\n");

    v = (int *) malloc (10 * sizeof(int));

    for(int x=0;x == x;x++){
        printf("Valor %02d: ", x+1);
        scanf("%d", &v[x]);

        if (v[x] == 0){
            break;
        } else {
            if(x+1 == tam){
                tam += 10;
                v = (int *) realloc (v, tam * sizeof(int));
            }
            i++;
        }

    }

    printf("O vetor foi encerrado\nv[%d]: ", i);

    for(int x=0; x < i; x++){
        printf("%d ", v[x]);
    }

    printf("\n");   

    free(v);


}