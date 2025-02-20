#include <stdio.h>
#include <stdlib.h>

main(){
    int tam, i;// tamanho do vetor e i pro for
    printf ("Digite o tamanho do vetor: ");
    scanf("%d", &tam);//armazenando o que o user escrever na variavel tam
    int vet[tam];//criar vetor APÓS digitar o tamanho do vetor
    printf("Agora preencha o vetor com o tamanho que foi digitado, no seu caso, %d espaços \n", tam);
    for (i=0; i<tam; i++){ //loop pra colocar valores do vetor
        scanf("%d", &vet[i]);

        if (vet[i] == -1){ //aq se digitar o valor -1 ele para de contar e aborta
            tam = i;
        }
    }
    printf("Os valores preenchidos no vetor foram: ");
    for (i=0; i<tam; i++){ //mostra os valores do vetor
        printf("%d ", vet[i]);
    }
}