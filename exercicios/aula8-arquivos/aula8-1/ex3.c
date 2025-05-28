#include <stdio.h>
#include <string.h>

// Escreva um programa que leia uma string do teclado e conte e imprima o número de ocorrências da string em um arquivo texto.

main(){

    FILE *lista, *resposta;
    char str[100], str_temp[100];//str_temp[100], é pra ser uma str temporaria pra armazenar a palavra q está comparando no file.txt
    int i = 0;

    printf("Digite uma palavra comum do dia a dia\n");
    scanf("%s", str);

    if((lista = fopen("!lista.txt", "r")) == NULL){
        printf("Erro ao abrir arquivo\n");
    }

    while ((fscanf(lista, "%s", str_temp)) != EOF){//guarda palvra no FILE para a str temporaria
        if (strcmp(str, str_temp) == 0){ //compara a str q digitei com a q esta guardando do FILE
            i++;
        }
    }
    fclose(lista);


    //criando arquivo se NÃO EXISTIR
    resposta = fopen("!resposta.txt", "a");
    if(resposta == NULL){
        printf("Erro ao abrir arquivo\n");
    }

    if(i == 0){ //se contador for = 0, nn tem ocorrencias
        fprintf(resposta, "A palavra '%s', nao possui nenhuma ocorrencia!", str);
    }else{ //senao, vai mostrar mensagem
        fprintf(resposta, "A palavra '%s', aparece %d vezes no arquivo!", str, i);
    }

    fclose(resposta);

    printf("Verifique a quantidade de ocorrencias no arquivo resposta.txt\n");


}