#include <stdio.h>

main()
{

    FILE *og, *copy;
    char c;

    if ((og = fopen("!og.txt", "r")) == NULL)
    {
        printf("\nErro ao abrir o arquivo original\n");
    }
    if ((copy = fopen("!copy.txt", "w")) == NULL)
    {
        printf("\nErro ao abrir o arquivo copia\n");
    }

    while (!feof(og))
    {
        c = getc(og);
        if (!feof(og))
        {
            putc(c, copy);
        }
    }

    fclose(og);
    fclose(copy);
    printf("Arquivo copiado com sucesso!\n");
}