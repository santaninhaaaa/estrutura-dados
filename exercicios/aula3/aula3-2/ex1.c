#include <stdio.h>
#include <stdlib.h>

//Crie um programa que calcula o comprimento de uma string (não use a função strlen).


main(){

    char str[100];
    int i, tam = 0;


    puts("Digite uma string qualquer: ");
    scanf("%s", str);

    for(i=0;str[i]!='\0';i++){ //loop pra contar até a string não ser igual ao terminador

        tam++;
    }

    printf("O comprimento da string é de %d caracteres", tam);
}

