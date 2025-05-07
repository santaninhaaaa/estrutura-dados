#include <stdio.h>

//Escreva um programa que contenha uma matriz de float 3 x 3. Imprima o endereço de cada posição da matriz.

main(){

    float m[3][3], *pm[3][3];
    int x,y;
    printf("Preencha a matriz de 3*3 = 9 espacos\n");

    for(x=0;x<3;x++){
        for(y=0;y<3;y++){
            scanf("%f", &m[x][y]);
            pm[x][y] = &m[x][y];
        }
    }

    printf("MATRIZ NORMAL");
    for(x=0;x<3;x++){
        printf("\n");
        for(y=0;y<3;y++){
            printf("%.2f ", m[x][y]);
        }
    }

    printf("\n\nMATRIZ MEMORIA");
    for(x=0;x<3;x++){
        printf("\n");
        for(y=0;y<3;y++){
            printf("%p ", pm[x][y]);
        }
    }
    printf("\n");
}