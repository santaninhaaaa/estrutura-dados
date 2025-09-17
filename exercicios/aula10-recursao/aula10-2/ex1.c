// Implemente um algoritmo que leia um valor n e crie um vetor dinâmico de n elementos. Na sequência passe o vetor como parâmetro para uma função para preencher o vetor. Depois, no programa principal, o vetor preenchido deve ser impresso. Ao final, liberar a área de memória alocada.

#include <stdio.h>
#include <stdlib.h>

void preencherVetor(int *vetor, int n){
    for (int i = 0; i < n; i++){
        printf("Digite o valor da posicao %d: ", i+1);
        scanf("%d", &vetor[i]);
    }
}

main(){
    int n;
    int *v; //ponteiro pro vetor dinamico

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    //alocação dinamica
    v = (int *) malloc (n*sizeof(int));
    if(v == NULL){
        printf("Erro ao alocar memoria\n");
    }

    preencherVetor(v, n);

    printf("Vetor preenchido >> ");
    for(int i = 0; i<n; i++){
        printf("%d ", v[i]);
    }
    printf("\n");

    free(v);
}