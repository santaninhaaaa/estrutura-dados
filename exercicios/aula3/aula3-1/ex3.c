#include <stdio.h>
#include <stdlib.h>

//Implemente um programa que receba um nome, calcule e retorne quantas letras tem esse nome

main(){

    char str[100];

    puts("Digite um nome: ");
    gets(str);
    int tam = strlen(str);

    printf("Você digitou um nome com o total de %d caracteres\n", tam);

}