#include <stdio.h> //bibliotecas importadas
#include <stdlib.h>

main(){
    int tam, i;// tamanho do vetor e "i" pro laço for
    printf ("Digite o tamanho do vetor: ");
    scanf("%d", &tam);//armazenando o que o user escrever na variavel tam
    int vet[tam];//criar vetor APÓS digitar o tamanho do vetor
    printf("Agora preencha o vetor com o tamanho que foi digitado, no seu caso, %d espaços \n", tam); //%d é a VARIAVEL, e após a virgula coloca o q é pra substituir
    for (i=0; i<tam; i++){ //loop pra colocar valores do vetor
        scanf("%d", &vet[i]);

        if (vet[i] == -1){ //aq se digitar o valor -1 ele aborta
            tam = i;//o tamanho q eu digitei vira o tanto q eu escrevi de vetor até digitar o -1
        }
    }
    printf("Os valores preenchidos no vetor foram: ");
    for (i=0; i<tam; i++){ //mostra os valores do vetor
        printf(" %d |", vet[i]);
    }
}