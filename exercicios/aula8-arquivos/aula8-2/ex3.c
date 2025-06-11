/*

Considere um arquivo texto (denominado “dados.txt”) que contém 10 registros, um 
por linha, as seguintes informações sobre pessoas:

a) nome (cadeia de 30 caracteres, ocupando as colunas de 1 a 30 do arquivo texto);
b) sexo (um caractere, ocupando a coluna 31 do arquivo texto, podendo ser ‘M’ ou ‘F’);
c) cor dos olhos (um caractere, ocupando a coluna 32 do arquivo texto, podendo ser 
‘A’, ‘B’, ‘C’, ou ‘D’);
d) altura (número decimal em metros, ocupa as colunas de 33 a 36 do arquivo texto);
e) peso (número decimal em quilos, ocupa as colunas de 37 a 41 do arquivo texto).

Implemente um programa que crie uma struct para receber esses valores de forma 
separada e apresente na tela os valores que foram armazenados pela struct.

*/

#include <stdio.h>

struct info{
char nome[30];
char sexo;
char olho;
char altura[4];
char peso[5];
};

main(){

    FILE *arquivo;
    struct info pessoa[10];
    int i = 0;

    if((arquivo = fopen("!dados.txt", "r")) == NULL){
        printf("Impossivel de abrir o arquivo\n");
    }

    for(i; i<10; i++){

        fscanf(arquivo, " %30c %c %c%4c%5c", pessoa[i].nome, &pessoa[i].sexo, &pessoa[i].olho, pessoa[i].altura, pessoa[i].peso);

        printf("Nome: %.30s\n", pessoa[i].nome);
        printf("Sexo: %c\n", pessoa[i].sexo);
        printf("Cor dos olhos: %c\n", pessoa[i].olho);
        printf("Altura: %.4s metros\n", pessoa[i].altura);
        printf("Peso: %.5s quilos\n", pessoa[i].peso);
        printf("*******************************\n");

    }
    

}