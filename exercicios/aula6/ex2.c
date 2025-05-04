#include <stdio.h>
#include <string.h>

//Faça um programa usando funções para calcular a média aritmética entre duas notas de um aluno e para mostrar a situação desse aluno, que pode ser aprovado ou reprovado

float media(float a, float b){
    return (a+b)/2;
}

void situacao(float a, float b, char c[10]){
    if (media(a,b) >= 6){
        strcpy(c, "Aprovado");
    }else{ strcpy(c, "Reprovado"); }
}

main(){

    float n1, n2, res;
    char sit[10];

    printf("Coloque duas notas, se forem decimais, coloque dividido por um ponto\nExemplo: 2.5\n");
    scanf("%f", &n1);
    scanf("%f", &n2);

    res = media(n1,n2);
    situacao(n1,n2,sit);

    printf("A media de %.2f e %.2f = -> %.2f <-\n%s\n", n1,n2,res,sit);
    

}