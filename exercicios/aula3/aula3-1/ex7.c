#include <stdio.h>
#include <string.h>

// Faça um programa que receba uma palavra e calcule quantas vogais (a, e, i, o, u) possui essa palavra


main(){

    char str[100];
    int i, cont = 0;


    puts("Digite uma string qualquer: ");
    scanf("%s", str);

    for(i=0; i<strlen(str);i++){
        if (str[i] == 'a' || str[i] == 'A' ||
            str[i] == 'e' || str[i] == 'E' ||
            str[i] == 'i' || str[i] == 'I' ||
            str[i] == 'o' || str[i] == 'O' ||
            str[i] == 'u' || str[i] == 'U'){

            cont++;
        }
    }

    printf("A palavra %s contem total de %d vogais", str, cont);

}