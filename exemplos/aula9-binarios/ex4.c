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
    int posicao;

    arquivo = fopen("!notas.dat", "rb");

    printf("Digite posicao do registro:\n");
    scanf("%d", &posicao);

    fseek(arquivo, (posicao-1) * sizeof(struct notas), SEEK_SET);
    fread(&aluno[posicao], sizeof(struct notas), 1, arquivo);


    printf("Nome[%d]: %s | ", posicao, aluno[posicao].nome);
    printf("Media: %.1f\n", aluno[posicao].media);

    fclose(arquivo);

}