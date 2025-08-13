#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Escreva um programa para armazenar (arquivo binário) os dados de 5 pacientes com a seguinte estrutura:
/*
    struct paciente{
        char nome[50];
        int idade;
        float altura;
        float peso;
        float imc;
    };
*/

struct info{
    char nome[50];
    int idade;
    float altura;
    float peso;
    float imc;
};

main()
{
    FILE *arquivo;
    struct info paciente[10];
    int i;

    arquivo = fopen("!pacientes.dat", "wb");

    printf("Complete as infos dos pacientes:\n");

    for(i=0;i<5;i++){

        printf("\nPaciente[%d]*******\n", i+1);
        printf("Nome: ");
        scanf("%s", &paciente[i].nome);
        printf("Idade: ");
        scanf("%d", &paciente[i].idade);
        printf("Altura: ");
        scanf("%f", &paciente[i].altura);
        printf("Peso: ");
        scanf("%f", &paciente[i].peso);

        paciente[i].imc = paciente[i].peso / (paciente[i].altura * paciente[i].altura);
        printf("IMC: %.2f\n", paciente[i].imc);

        fwrite(&paciente[i], sizeof(struct info), 1, arquivo);

    }

    fclose(arquivo);

}