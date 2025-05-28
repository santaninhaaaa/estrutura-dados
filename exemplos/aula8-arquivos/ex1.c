#include <stdio.h>

main()
{

    FILE *arquivo;
    arquivo = fopen("!texto.txt", "r");
    if (arquivo == NULL)
    {
        printf("Impossivel abrir o arquivo!\n");
    }
    else
    {
        printf("Arquivo aberto com suscesso\n");
        fclose(arquivo);
    }
}