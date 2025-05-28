#include <stdio.h>

main()
{

    FILE *fp; // está apontando pra arquivo
    int i = 0;
    char c;

    fp = fopen("!texto.txt", "r"); // abrindo file pra leitura

    // contar os caracteres do ficheiro

    while ((c = fgetc(fp)) != EOF)
    {
        putchar(c);
        i++;
    }

    printf("\nNo arquivo text.txt tem total de %d caracteres\n", i);
    fclose(fp); // fecha arquivo
}