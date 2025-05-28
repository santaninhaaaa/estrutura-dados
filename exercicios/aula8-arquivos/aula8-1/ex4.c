#include <stdio.h>

// Escreva um programa que leia um caractere do teclado e conte e imprima o número de ocorrências do caractere em um arquivo texto.

main(){

    FILE *lista, *resposta;
    char c, ctemp;
    int i = 0;

    printf("Digite UM CARACTER QUALQUER no teclado\n");
    scanf("%c", &c);

    if((lista = fopen("!lista.txt", "r")) == NULL){
        printf("Erro ao abrir arquivo\n");
    }

    while ((ctemp = fgetc(lista)) != EOF){
        if (c == ctemp){
            i++;
        }
    }
    fclose(lista);

    resposta = fopen("!resposta.txt", "a");
    if(resposta == NULL){
        printf("Erro ao abrir arquivo\n");
    }

    if(i == 0){
        fprintf(resposta, "Nao possui o caracter '%c' no arquivo", c);
    }else{
        fprintf(resposta, "O caracter '%c', aparece %d vezes no arquivo!", c, i);
    }

    fclose(resposta);

    printf("Verifique a quantidade de ocorrencias no arquivo resposta.txt\n");
}