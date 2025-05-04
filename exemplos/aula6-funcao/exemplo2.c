//PASSAGEM DE PARAMETRO POR VALOR

#include <stdio.h>

int soma_dobro(int a, int b);

main(){
    int x, y, res;

    printf("Digite o valor de X\n");
    scanf("%d", &x);
    printf("Digite o valor de Y\n");
    scanf("%d", &y);

    res = soma_dobro(x,y);//os exatos valores de X e Y são copiados para a função em A e B

    printf("a soma do dobro de %d e %d = %d\n", x,y,res);
    //a soma do dobro de 5 e 3 = 16
}
//função apos a main
int soma_dobro(int a, int b){
    int soma;
    a = 2*a;//5=10
    b = 2*b;//3=6
    soma = a + b;//16 = 10+6
    return soma;
}