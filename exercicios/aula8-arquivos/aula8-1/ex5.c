#include <stdio.h>

//Escreva um programa que leia duas notas de 4 alunos (use struct), calcule a média e grave em um arquivo texto da seguinte forma:

/*
Alunos  Nota1   Nota2   Media
Nome1   0,0     0,0     0,0
Nome2   0,0     0,0     0,0
Nome3   0,0     0,0     0,0
Nome4   0,0     0,0     0,0
*/

struct notas{
    char nome[50];
    float n1;
    float n2;
    float m;
};

main(){

    FILE *notas;

    struct notas aluno[4];

    printf("Complete os dados de 4 alunos, por favor:\n");

    for(int i = 0; i<4; i++){

        printf("Nome %d: ", i+1);
        scanf("%s", aluno[i].nome);
        printf("Nota 1: ");
        scanf("%f", &aluno[i].n1);
        printf("Nota 2: ");
        scanf("%f", &aluno[i].n2);
        printf("*******************************\n");

        aluno[i].m = (aluno[i].n1+aluno[i].n2)/2;
    }

    notas = fopen("!notas.txt", "a");
    if (notas == NULL){
        printf("Impossivel abrir o arquivo!");
    }

    fprintf(notas, "Alunos\t\tNota1\t\tNota2\t\tMedia\n");

    for(int i = 0; i<4; i++){

        fprintf(notas, "%s\t\t%.2f\t\t%.2f\t\t%.2f\n", aluno[i].nome, aluno[i].n1, aluno[i].n2, aluno[i].m);
    }

    fclose(notas);

    printf("Verifique no arquivo notas.txt, pra verificar a media dos alunos!\n");
    
}

