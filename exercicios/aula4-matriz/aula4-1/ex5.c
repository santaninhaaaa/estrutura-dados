#include <stdio.h>

//Faça um algoritmo em linguagem C que preencha uma matriz e um vetor com tamanho definido pelo usuário (as linhas e colunas da matriz deve ser igual ao tamanho das colunas do vetor), depois some os valores da primeira linha da matriz com o valor da primeira coluna do vetor e armazene esta soma na primeira coluna de um segundo vetor. Faça isso para todas as linhas existentes. É necessário usar laço. Exemplo: matriz [4] [4] e vetor[4]

main(){

    int n,x,y;

    printf("Digite um valor pra ser o tamanho da matriz e do vetor\n");
    scanf("%d", &n);

    int v[n], m[n][n], r[n], soma;
    int qtd = n*n;

    printf("Digite os valores da matriz %dx%d, %d valores\n", n, n, qtd);
    for(x=0;x<n;x++){
        for(y=0;y<n;y++){
            scanf("%d", &m[x][y]);
        }
    }

    printf("Digite os valores do vetor com %d numeros\n", n);
    for(x=0;x<n;x++){
        scanf("%d", &v[x]);
    }

    //aqui ta sendo feita a soma da matriz e do vetor
    for(x=0;x<n;x++){
        soma = 0;
        for(y=0;y<n;y++){
            soma = soma + m[x][y];
        }
        r[x] = soma + v[x];
    }

    printf("Resultado:\nMatriz ");

    for(x=0;x<n;x++){
        printf("\n");
        for(y=0;y<n;y++){
            printf("%d ", m[x][y]);
        }
    }
    printf(" + Vetor ");

    for(x=0;x<n;x++){
        printf("%d ", v[x]);
    }

    printf(" = ");

    for(x=0;x<n;x++){
        printf("%d ", r[x]);
    }

    printf("\n");
}