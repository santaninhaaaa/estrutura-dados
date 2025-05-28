#include <stdio.h>

// Escreva um programa que leia o arquivo do exercício anterior e armazene os caracteres lidos do arquivo em uma string. Em seguida, imprima a string na tela.

main(){

    FILE *arquivo;
    char c, str[100];

    if((arquivo = fopen("!texto.txt", "r")) == NULL){
        printf("Erro ao abrir arquivo\n");
    }
    for (int i = 0;(c = fgetc(arquivo)) != EOF && i < 100; i++){ //enquanto o FILE nn chegar nn final e o contador da string for menor q 100, add 1
        str[i] = c;
    }
    
    printf("Contudo lido: %s\n", str);
    fclose(arquivo);

}