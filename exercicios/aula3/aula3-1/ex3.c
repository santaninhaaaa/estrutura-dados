#include <stdio.h>
#include <string.h>

//Faça um programa em C que lê um string de 4 caracteres e inverte a primeira letra do string com a última. O programa deve escrever a string original e a alterada

main(){

    char str[5];
    char ogstr[5];//string pra armazenar o original

    puts("Escreva uma palavra/string de ate 4 caracteres: ");
    scanf("%s", &str);

    strcpy(ogstr, str);

    if(strlen(str) > 1){ //se o tamanho da str for maior q 1 continua
        char c = str[0]; //guarda TEMPORARIAMENTE posição 0 no char c
        str[0] = str[strlen(str) - 1]; //atribuo posição 0 o valor da ultima variavel
        str[strlen(str) - 1] = c; //guardei ultima variavel com o char c que está com a posição 0 TEMPORARIAMENTE
    }
    
    printf("A palavra/string digitada: '%s' \nA palavra/string alterada: '%s'\n", ogstr, str);

}