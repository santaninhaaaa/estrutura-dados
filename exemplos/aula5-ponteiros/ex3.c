#include <stdio.h>

main(){

    int x=5, *p1, *p2;
    p1 = &x; //p1 guardadno endereço de memória de X
    p2 = p1; //p2 é igual o endereço de p1, ou seja, X
    printf("x (valor já atribuido no codigo)= %d\np1= %p - P1 está guardadno endereço de memória de X\np2 = %p - P2 é igual o endereço de P1, ou seja, X", x,p1,p2);

}