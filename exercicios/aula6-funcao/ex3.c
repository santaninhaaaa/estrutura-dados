#include <stdio.h>

//Faça um programa utilizando funções (com passagens de parâmetros por referência) que simula uma calculadora, o usuário digita 2 valores e depois escolhe a operação matemática que deseja fazer (soma, subtração, multiplicação, divisão).
float adicao(float *a, float *b){
    return *a+*b;
}
float subtracao(float *a, float *b){
    return *a-*b;
}
float multiplicacao(float *a, float *b){
    return *a*(*b);
}
float divisao(float *a, float *b){
    return *a/(*b);
}

main(){

    float n1,n2,res;
    int opc;

    printf("A BUCETA DUMA DESGRAMA DE CALCULADORA\n\nPor favor, digite dois valores inteiros:\nValor 1: ");
    scanf("%f", &n1);
    printf("Valor 2: ");
    scanf("%f", &n2);

    printf("\nDigite a operacao que deseja:\n");
    printf("1 - adicao\n2 - subtracao\n3 - multiplicacao\n4 - divisao\nOpção: ");
    scanf("%d", &opc);

    switch (opc){
        case 1:
            res = adicao(&n1,&n2);
            printf("ADICAO\n%.0f + %.0f = %.0f\n",n1,n2,res);
        break;
        case 2:
            res = subtracao(&n1,&n2);
            printf("SUBTRACAO\n%.0f - %.0f = %.0f\n",n1,n2,res);
        break;
        case 3:
            res = multiplicacao(&n1,&n2);
            printf("MULTIPLICACAO\n%.0f * %.0f = %.0f\n",n1,n2,res);
        break;
        case 4:
            res = divisao(&n1,&n2);
            printf("DIVISAO\n%.2f / %.2f = %.2f\n",n1,n2,res);
        break;
        default:
            printf("Opcao invalida\n");
        break;
    }
}