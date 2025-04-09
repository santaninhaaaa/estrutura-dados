#include <stdio.h>
#include <stdlib.h>

/*Tabuada com for: Desenvolva um programa que solicite ao usuário um número inteiro e utilize um loop for para exibir a tabuada desse número de 1 a 10.*/

main(){

    int n, i;
    printf("Digite um numero\n");
    scanf("%d", &n);

    printf("Tabuada do %d\n", n);
    for(i=1;i<=10;i++){

        int r = n*i;
        printf("%d x %d = %d\n",n,i,r);

    }

}