#include <stdio.h>

//Escreva um programa que leia duas strings e imprime as duas strings na tela. Imprima também a segunda letra de cada string.
main(){

char str1[25], str2[25];
puts("Digite uma palavra: ");
gets(str1);
printf("Agora que %s foi digitado, digite outra palavra: \n", str1);
gets(str2);
printf("Certo, foram digitados %s e %s, sendo assim a segunda letra de cada um seria: '%c' e '%c'", str1, str2, str1[1], str2[1]);
}

