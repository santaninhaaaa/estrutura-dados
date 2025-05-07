#include <stdio.h>

//Faça um programa em C que lê um string de 5 caracteres e escreve a string invertida.

main(){

    char str[5];
    int i;

    puts("Escreva uma palavra/string de ate 5 caracteres: ");
    gets(str);

    puts("A palavra/string digitada de forma invertida fica: ");
    for (i=4;i>=0;i--){
        printf("%c", str[i]);
    }
    printf("\n");

}   