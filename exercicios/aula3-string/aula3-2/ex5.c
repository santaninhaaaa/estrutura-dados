#include <stdio.h>
#include <string.h>

// Escreva um programa que substitui as ocorrências de um caractere ‘0’ em uma string por outro caractere, no caso, caractere ‘1’.


main(){

    char str[100], ogstr[100];
    int i, cont = 0;

    puts("Digite uma string qualquer, porem contendo o numero 0: ");
    scanf("%s", str);

    strcpy(ogstr, str);

    for(i=0; i<strlen(str);i++){

        if(str[i] == '0'){
            str[i] = '1';
        }

    }

    printf("A string %s alterada fica %s\n", ogstr, str);

}