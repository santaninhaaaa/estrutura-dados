/*
Faça um programa que utilize struct com as seguintes informações: nome, 
telefone e e-mail do paciente. Na sequência o usuário deverá definir a 
quantidade de pacientes que deseja cadastrar e informar os dados dos
pacientes. Os dados devem ser gravados em um arquivo texto, um paciente 
por linha.
*/

#include <stdio.h>

struct info{
    char nome[30];
    char telefone[14];
    char email[200];
} paciente;

main(){

    int n;
    FILE *arquivo;

    printf("Quantos pacientes deseja cadastrar?\n");
    scanf("%d", &n);

    arquivo = fopen("!pacientes.txt", "a");
    if (arquivo == NULL){printf("Erro ao abrir arquivo!\n");}

    printf("Por favor, preencha os dados:\n");
    for(int i = 0; i<n; i++){

        printf("Paciente %d\n", i+1);

        printf("Nome: ");
        scanf("%s", paciente.nome);
        printf("Telefone (XX)XXXXXXXXX: ");
        scanf("%s", paciente.telefone);
        printf("Email: ");
        scanf("%s", paciente.email);
        printf("*************************\n");

        fprintf(arquivo, "%s | %s | %s\n", paciente.nome, paciente.telefone, paciente.email);

    }

    fclose(arquivo);

    printf("Dados salvos em !pacientes.txt\n");

}