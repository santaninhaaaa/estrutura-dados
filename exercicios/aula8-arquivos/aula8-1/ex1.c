#include <stdio.h>

// Escreva um programa que leia uma string e grave a string em um arquivo texto. A gravação deve ser feita caractere por caractere (função fputc ou putc).

main(){

    FILE *arquivo;
    char str[100];

    puts("Escreva uma palavra/string:");
    scanf("%s", str);

    if((arquivo = fopen("!texto.txt", "w")) == NULL){
        printf("Erro ao abrir arquivo\n");
    }
    for(int i = 0; str[i] != '\0'; i++){
        fputc(str[i], arquivo);
    }
    
    fclose(arquivo);
    printf("Palavra copiada no sistema com sucesso!\n");

}