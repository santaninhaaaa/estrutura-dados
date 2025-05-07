#include <stdio.h>

//Criar uma struct chamada notas, que armazena o nome, a nota1, a nota2 e a média do aluno. Criar uma variável dessa struct e ler os campos (com exceção da média que é calculada). Depois exibir o nome, a média do aluno e a palavra aprovado (se média >= 6) ou reprovado.

struct notas {
    char nome[30];
    float nota1;
    float nota2;
    float media;
} aluno;

main(){

    printf("Complete os dados abaixo, por favor:\n");
    printf("Nome: ");
    scanf("%s", aluno.nome);
    printf("Nota 1: ");
    scanf("%f", &aluno.nota1);
    printf("Nota 2: ");
    scanf("%f", &aluno.nota2);

    aluno.media = (aluno.nota1+aluno.nota2)/2;

    printf("Nome: %s\n", aluno.nome);
    printf("A media de ambas as notas sao: (%.2f + %.2f) / 2 = %.2f\n", aluno.nota1, aluno.nota2, aluno.media);
    if(aluno.media >= 6){printf("Aprovado!\n");}else{printf("Reprovado!\n");}



}