#include <stdio.h>
#include <stdlib.h>

main(){
    int *v;
    int x, y;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &x);

    v = (int *) (malloc(x*sizeof(int)));
    if(v == NULL){
        printf("\nErro para alocacao de memoria\n");
    } else {
        printf("Digite os numeros do vetor:\n");
        for(y = 0; y<x; y++){
            printf("Valor %d: ", y+1);
            scanf("%d", &v[y]);
        }
        printf("Os numeros digitados foram: ");
        for(y=0;y<x;y++){
            printf("%d ", v[y]);
        }
        printf("\n");
        free(v);
    }


}