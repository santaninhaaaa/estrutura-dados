/*
Implemente um programa que leia um arquivo texto (nome definido pelo aluno(a)) 
que contenha os valores de uma matriz (linha e coluna). Em seguida, imprima na tela 
a dimensão da matriz.
Exemplo de arquivo de entrada:
1 1 1
1 1 1
1 1 1

Exemplo de saída:
A dimensão da Matriz é: 3 x 3
*/

#include <stdio.h>

main(){

    FILE *arquivo;
    char c;
    int i = 0;
    int x, y;

    if((arquivo = fopen("!matriz.txt", "r") == NULL)){
        printf("Impossível abrir arquivo");
    }

    while((c = fgetc(arquivo)) != EOF){
        if(){

        } else{
            i++;
        }
    }



}