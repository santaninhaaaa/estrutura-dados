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
#include <string.h>

main(){

    FILE *arquivo;
    char valor[10];
    int i = 0;
    int x, y;

    if((arquivo = fopen("!matriz.txt", "r")) == NULL){
        printf("Impossível abrir arquivo");
    }

    while(fgets(valor, sizeof(valor), arquivo) != NULL){
        x++; //quer dizer q encontrou mais uma linha, estamos contando as linhas por aqui

        if(x == 1){ // na primeira linha ja descobrimos a coluna
            y = strlen(valor); //estamos medindo a primeira linha, q ja é as colunas

            if (valor[y-1] == '\n'){ //se o valor das colunas - 1 for uma quebra de linha
                valor[y-1] = '\0'; //vai transformar num terminador
                y--; //e diminui o valor da coluna pra ficar certinho
            }
        }
        
    }

    fclose(arquivo);

    printf("A dimensão da Matriz e: %d x %d\n", y,x);

}