#include <stdio.h>

//Faça um programa em C que gere a seguinte matriz, é necessário usar laço:

/*
0 0 0 1
0 0 1 0
0 1 0 0
1 0 0 0
*/

main(){

    int M[4][4];
    int x,y;

    for(x=0;x<4;x++){
        for(y=0;y<4;y++){
            if(x + y == 3){
                M[x][y] = 1;
            } else {
                M[x][y] = 0;
            }
        }
    }

    for(x=0;x<4;x++){
        printf("\n");
        for(y=0;y<4;y++){
            printf("%d ", M[x][y]);
        }
    }

}