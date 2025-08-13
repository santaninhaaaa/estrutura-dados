#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Escreva um programa para mostrar apenas o terceiro paciente cadastrado do primeiro exercício.

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

    fseek(arquivo, 2 * sizeof(struct info), SEEK_SET);
    fread(&paciente[0], sizeof(struct info), 1, arquivo);


    printf("Paciente[3]: %s | ", paciente[0].nome);
    printf("Idade: %d | ", paciente[0].idade);
    printf("Altura: %.2f | ", paciente[0].altura);
    printf("Peso: %.2f | ", paciente[0].peso);
    printf("IMC: %.2f\n", paciente[0].imc);

    fclose(arquivo);

}