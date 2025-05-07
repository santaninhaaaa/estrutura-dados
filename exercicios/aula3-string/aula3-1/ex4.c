#include <stdio.h>
#include <string.h>

//Faça um programa que leia uma string e faça uma copia para uma outra string

main(){

    char str[100];
    char strcp[100];

    puts("Escreva uma palavra de ate 20 letras que vai ser armazenado na string 'str'\n");
    scanf("%s", &str);

    strcpy(strcp, str);
    printf("Agora a string em 'str' (%s),\nfoi copiada para a string 'strcp'(%s)\nGood job girl!\n", str, strcp);
}