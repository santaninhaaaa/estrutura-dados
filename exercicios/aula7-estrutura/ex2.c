#include <stdio.h>

//Considerando o exercício 1, criar uma variável que é um vetor da struct notas. O programa deve calcular e mostrar a média de 10 alunos e também a média geral da sala

struct notas {
    char nome[30];
    float nota1;
    float nota2;
    float media;
};

main(){

    struct notas aluno[10]; 
    float media_t = 0; 

    printf("Complete os dados de 10 alunos, por favor:\n");

    for(int i = 0; i<10; i++){

        printf("Nome %d: ", i+1);
        scanf("%s", aluno[i].nome);
        printf("Nota 1: ");
        scanf("%f", &aluno[i].nota1);
        printf("Nota 2: ");
        scanf("%f", &aluno[i].nota2);
        printf("*******************************\n");

        aluno[i].media = (aluno[i].nota1+aluno[i].nota2)/2;

        media_t += aluno[i].media;

    }

    printf("*******************************\n");


    for(int i = 0; i<10; i++){

        printf("Nome: %s\n", aluno[i].nome);
        printf("A media de ambas as notas sao: (%.2f + %.2f) / 2 = %.2f\n", aluno[i].nota1, aluno[i].nota2, aluno[i].media);
        if(aluno[i].media >= 6){printf("Aprovado!\n");}else{printf("Reprovado!\n");}
        printf("*******************************\n");

    }

    media_t /= 10;
    printf("A media geral da turma foi de %.2f!\n", media_t);

}