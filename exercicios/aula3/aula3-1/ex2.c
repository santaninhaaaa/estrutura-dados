#include <stdio.h>
#include <stdlib.h>

// Implemente um programa que receba um nome e imprima o nome somente se a primeira letra do nome for ‘a’ (maiúscula ou minúscula)

main(){

    char str[50];
    int i, tam = 0;


    puts("Digite um nome: ");
    gets(str);

    if (str[0] == 'a' || str[0] == 'A'){
        printf("Você digitou o nome %s", str);
    } else { 
        printf("Apenas mostra nomes que começam com 'A' ou 'a'"); 
    }

}