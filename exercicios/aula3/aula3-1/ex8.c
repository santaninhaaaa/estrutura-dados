#include <stdio.h>

// Escreva um programa que leia a idade e o primeiro nome de 5 pessoas. Ao terminar, o programa deve escrever o nome e a idade das pessoas mais jovens e mais velhas.

main(){

    char name[5][100]; //terá 5 strings armazenadas 5 linhas de 100 colunas
    int age[5], i, jovem = 0, velho = 0; 

    for(i=0;i<5;i++){
        printf("Digite nome e idade da pessoa %d\nExemplo: Luana 30\n", i + 1);
        scanf("%s %d", name[i], &age[i]);

        if(age[i]<age[jovem]){ jovem=i;}
        if(age[i]>age[velho]){ velho=i;}
    }

    printf("\nA pessoa mais jovem: %s com %d anos\nA pessoa mais velha: %s com %d anos\n", name[jovem], age[jovem], name[velho], age[velho]);

}