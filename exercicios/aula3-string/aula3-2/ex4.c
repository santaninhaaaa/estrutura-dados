#include <stdio.h>
#include <stdlib.h>

//Faça um programa que conte o número de 1’s que aparecem em uma string. Exemplo: “0011001” -> 3

main(){

    char str[100];
    int i, um = 0;

    puts("Digite uma quantidade qualquer de números em uma string:");
    scanf("%s", str);

    for(i=0;str[i] != 0;i++){
        if (str[i] == '1'){
            um++;
        }
    }

    printf("'%s' -> tem exatos *%d* números 1\n", str, um);
    
}