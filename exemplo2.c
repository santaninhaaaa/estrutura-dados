#include <stdio.h>
#include <stdlib.h>

main()/*
{
	int num[5]; //declara vetor int de 5 posicoes
    //tipo variavel[tamanho]
	printf ("\nEntre com 5 (cinco) numeros: ");
    scanf ("%d", &num[0]);
    scanf ("%d", &num[1]);
    scanf ("%d", &num[2]);
    scanf ("%d", &num[3]);
    scanf ("%d", &num[4]);

    printf("\n\n O segundo numero do vetor e:");
    printf("%d", num[1]);
    printf("\n\n O quarto numero do vetor e:");
    printf("%d", num[3]);

    system("PAUSE");

}
*/
//pra poder resolver com um LAÇO

    {
        int num[5]; //declara vetor int de 5 posicoes
        //tipo variavel[tamanho]
        int i; //variavel do laço

        printf ("\nEntre com 5 (cinco) numeros: ");

        for(i=0; i<5; i++){
            scanf ("%d", &num[i]);
        }

        printf("\n\n O segundo numero do vetor e:");
        printf("%d", num[1]);
        printf("\n\n O quarto numero do vetor e:");
        printf("%d", num[3]);

        system("PAUSE");

    }
