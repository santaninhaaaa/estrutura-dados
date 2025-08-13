#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Escreva um programa para mostrar os pacientes cadastrados do exercício anterior.

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

    arquivo = fopen("!pacientes.dat", "rb");

    for(i=0;i<5;i++){

        fread(&paciente[i], sizeof(struct info), 1, arquivo);

        printf("Paciente[%d]: %s | ", i+1, paciente[i].nome);
        printf("Idade: %d | ", paciente[i].idade);
        printf("Altura: %.2f | ", paciente[i].altura);
        printf("Peso: %.2f | ", paciente[i].peso);
        printf("IMC: %.2f\n", paciente[i].imc);

    }

    fclose(arquivo);

}