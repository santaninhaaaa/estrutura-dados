#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct notas {
    char nome[30];
    float media;
};

main()
{
    FILE *arquivo;
    struct notas aluno[10];
    int i, qtd = 2;

    arquivo = fopen("!notas.dat", "rb");

    for(i=0; i<qtd; i++){

        fread (&aluno[i], sizeof(struct notas), 1, arquivo);

        printf("Nome[%d]: %s | ", i+1, aluno[i].nome);
        printf("Media: %.1f\n", aluno[i].media);

    }

    fclose(arquivo);

}