#include <stdio.h>

//Escreva um programa que contenha duas variáveis inteiras. Solicite os valores dessas variáveis para o usuário. Em seguida, compare seus endereços e exiba o conteúdo do maior endereço.

main(){

    int a,b,*pa,*pb;

    printf("Digite dois valores inteiros, por favor\n");
    scanf("%d", &a);
    scanf("%d", &b);

    pa = &a;//está guardando END de A
    pb = &b;//está guardando END de B

    printf("Valor de A = %d e seu endereco = %d\n", a, pa);
    printf("Valor de B = %d e seu endereco = %d\n", b, pb);

    if(pa > pb){
        printf("A tem maior endereco -> endereco de A = %d bytes\nB tem menor endereco -> endereco de B = %d bytes\n", pa, pb);
    } else {
        printf("B tem maior endereco -> endereco de B = %d bytes\nA tem menor endereco -> endereco de A = %d bytes\n", pb, pa);
    }
    
}