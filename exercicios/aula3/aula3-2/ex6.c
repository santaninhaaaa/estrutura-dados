#include <stdio.h>
#include <string.h>

// Faça um programa que receba do usuário uma string. O programa deve imprimir a string sem suas vogais.


main(){

    char str[100];
    int i;


    puts("Digite uma string qualquer: ");
    scanf("%s", str);

    printf("A string sem suas vogais fica como: ");
    for(i=0; i<strlen(str);i++){
        if (str[i] != 'a' && str[i] != 'A' &&
            str[i] != 'e' && str[i] != 'E' &&
            str[i] != 'i' && str[i] != 'I' &&
            str[i] != 'o' && str[i] != 'O' &&
            str[i] != 'u' && str[i] != 'U'){

             printf("%c", str[i]);
        }
    }

}