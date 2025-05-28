#include <stdio.h>
#include <ctype.h> //anotação na aula de manipulação de string - aula3

//Implemente um programa que abra um arquivo de texto e mostre na tela quantos caracteres desse arquivo são vogais.

main(){

    FILE *arquivo;
    int i = 0;
    char c;
    if((arquivo = fopen("!texto.txt", "r")) == NULL){
        printf("Erro ao abrir arquivo\n");
    }

    while((c = fgetc(arquivo)) != EOF){
    
        c = tolower(c); //deixando os caracteres em minusculo se tiver maiusculo
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
            i++;
        }

    }

    fclose(arquivo);
    printf("Temos um total de %d vogais no arquivo\n", i);

}
