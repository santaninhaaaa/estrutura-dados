#include <stdio.h>

//Considere que existe um arquivo texto (chamado ‘temp.txt”) que contém temperaturas ocorridas durante 50 dias (uma temperatura por linha) de uma cidade. Implemente um programa que calcule e apresente:
/*
a) a menor temperatura ocorrida;
b) a maior temperatura ocorrida;
c) a temperatura média;
d) número de dias nos quais a temperatura foi inferior à temperatura média;
e) número de dias nos quais a temperatura foi superior à temperatura média.
*/

main(){
    FILE *arquivo;

    int abaixom = 0, acimam = 0;
    float menor, maior, media, temperatura[50], soma;

    int i = 0, x = 0;//contadores, X é o contador pra ver os dias

    if((arquivo = fopen("!temp.txt", "r")) == NULL){
        printf("Impossivel de abrir o arquivo\n");
    }

    //MENOR TEMP. MAIOR TEMP. E SOMA DE TODAS AS TEMP.
    while((fscanf(arquivo, "%f", &temperatura[i])) != EOF){//está guardando num array

        soma += temperatura[i]; //acumulando e fazendo a soma

        if(i == 0){
            menor = maior = temperatura[i];
        } else {
            if (temperatura[i] < menor){
                menor = temperatura[i];
            }
            if (temperatura[i] > maior){
                maior = temperatura[i];
            }
        }

        i++;
    
    }

    fclose(arquivo);

    media = soma/i; //MÉDIA

    //DIAS ACIMA E ABAIXO DA MEDIA
    for(x; x<i; x++){
        if(temperatura[x] < media){
            abaixom++;
        } else { 
            acimam++;
        }
    }

    printf("Menor temperatura >>>> %.2f\n", menor);
    printf("Maior temperatura >>>> %.2f\n", maior);
    printf("Media temperatura >>>> %.2f\n", media);
    printf("Dias c/ temp. abaixo da media >>>> %d\n", abaixom);
    printf("Dias c/ temp. acima da media >>>> %d\n", acimam);

}