#include <stdio.h>

main(){

    int i,j,*pont;
    i = 5;
    pont = &i; //pont armazenando endereço da memoria i
    j = *pont; //j pegou o VALOR de pont 
    printf("O valor de i = %d\nO endereço de &i = %d\n***************\n", i, &i);
    printf("O valor de pont = %d\n***************\n", pont);
    printf("O valor de j = %d\nO endereço de &j = %d\n***************\n", j, &j);

}