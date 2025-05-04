#include <stdio.h>
//Quais serão os valores das variáveis x, y e p ao final do trecho de código:

main(){

    int x, y=0, *p;
    p = &y; //P é igual ao endereço de Y (p = 1234 == y)
    x = *p; //X é igual ao valor que o endereço de P está apontando/guardando (x = 0)
    x = 4; //X é igual a 4 (x = 4)
    (*p)++; //o valor que P está apoontando é adicionado mais 1 (y = 1 e p* = 1)
    --x; //o valor de X diminui menos 1 (x = 3)
    (*p) += x; //o valor que o endereço de P está apontando, vai ser somado com X (p* = 1+3 -> 4)

    printf("p = %d\n", p); // 1234
    printf("*p = %d\n", *p); // 4
    printf("x = %d\n", x); // 3
    printf("y = %d\n", y);// 4

}