//bibliotecas importadas (podem ser importadas api's tbm)
#include <stdio.h> //para o funcionamento do scanf
#include <stdlib.h>

main() //funcao q pode chamar outras funçoes - OBRIGATORIO
{

    int n;

	printf("Digite um numero");
    scanf ("%d", &n); //funcao de entrada - aguarda entrada do user e o &n vai ser armazenado na memoria
    printf("O numero digitado foi = %d \n", n);//funcao de saida - mostra o resultado na tela
    system("PAUSE"); //isso é do proprio MS-DOS


/*
	<stdio.h>

	%d -> int n;
	%f -> float n1;
	%c -> char c; //variavel char apenas
	%s -> char nome[50]; //vetor de caracteres de ate 50, string em outras linguas

	cada espaço da memoria é chamado de endereço q é reservado em hexadecimal
	ele obtem endereço de memoria -> &
*/


}