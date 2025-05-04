//PASSAGEM DE PARAMETRO POR REFERENCIA

#include <stdio.h>

int soma_dobro(int *a, int *b);

main(){
    int x, y, res;

    printf("Digite o valor de X\n");
    scanf("%d", &x);
    printf("Digite o valor de Y\n");
    scanf("%d", &y);

    res = soma_dobro(&x,&y);
    //vc está utilizando o ENDEREÇO DE MEMORIA nao o valor
    //o valor é substituido, x e y serão sobrescritos

    printf("a soma do dobro de %d e %d = %d\n", x,y,res);
}
//função apos a main
int soma_dobro(int *a, int *b){
    int soma;
    *a = 2*(*a);//5=10
    *b = 2*(*b);//3=6
    soma = *a + *b;//16 = 10+6
    return soma;
}