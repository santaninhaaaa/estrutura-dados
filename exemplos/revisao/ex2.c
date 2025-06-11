/*
Faça um programa que crie um arquivo texto com o nome “primos.txt”, e
grave neste arquivo os números primos de 1 até 1000. Os números devem ser 
gerados automaticamente, sem interação do usuário.
*/
#include <stdio.h>


main(){

int n;
FILE *arquivo;

arquivo = fopen("!primos.txt", "a");
if(arquivo == NULL){printf("IMPOSSIVEL ABRIR ARQUIVO\n");}

for(n = 1; n <=1000; n++){

    

}

fclose(arquivo);
printf("Numeros primos salvos\n");

}