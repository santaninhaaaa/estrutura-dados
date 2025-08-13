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

    arquivo = fopen("!notas.dat", "wb");

    for(i=0; i<qtd; i++){
        printf("Digite o nome do aluno:\n");
        scanf("%s", &aluno[i].nome);
        printf("Digite a media do aluno:\n");
        scanf("%f", &aluno[i].media);
        printf("*********************\n");

        fwrite(&aluno[i], sizeof(struct notas), 1, arquivo);

    }

    fclose(arquivo);

}
