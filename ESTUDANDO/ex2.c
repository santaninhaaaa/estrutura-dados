#include <stdio.h>
#include <stdlib.h>

/*Contagem Regressiva com while: Crie um programa que peça ao usuário um número inteiro positivo e, em seguida, use um loop while para exibir uma contagem regressiva a partir desse número até zero.*/

main(){
    
    int n;
    printf("Digite um numero positivo maior que 0\n");
    scanf("%d", &n);

    if(n <= 0) {printf("Nao pode ser menor ou igual a zero\n");} 
    else {
        printf("Contagem de %d a 0\n", n);
        while (n >= 0){
            printf("%d ", n);
            n--;
        }
    }

}