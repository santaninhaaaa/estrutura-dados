#include <stdio.h>
#include <stdlib.h>

/*Soma de Números Positivos: Escreva um programa que peça números inteiros ao usuário repetidamente. O programa deve somar todos os números positivos inseridos e parar quando o usuário digitar um número negativo. Utilize um loop while.*/

main(){

    int n[10], i = 0, r = 0;
    printf("Digite numero nesse vetor de 10\n");

    while (i < 10){

        scanf("%d", &n[i]);

        if (n[i] < 0){
            break;
            r = n[i] + r;
        } else {
            r = n[i] + r;
            i++;
        }

    }

    printf("A soma dos numeros digitado foi %d\n", r);

}