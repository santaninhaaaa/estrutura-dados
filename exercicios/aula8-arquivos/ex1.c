#include <stdio.h>

main(){

    FILE *arquivo;
    char str[100];

    puts("Escreva uma palavra/string:");
    scanf("%s", &str);

    if((arquivo = fopen("!texto.txt", "r")) == NULL){
        printf("Arquivo inexistente\n");
    }
    


}