#include <stdio.h>

//Faça um programa em C que gere a seguinte matriz, é necessário usar laço:

/*
1 3 3 3 3 2
3 1 3 3 2 3
3 3 1 2 3 3
3 3 2 1 3 3
3 2 3 3 1 3
2 3 3 3 3 1
*/

main(){

    int M[6][6];
    int x,y;

    for(x=0;x<6;x++){
        for(y=0;y<6;y++){
            if(x == y){
                M[x][y] = 1;
            } else if (x + y == 5){
                M[x][y] = 2;
            } else {
                M[x][y] = 3;
            }
        }
    }

    for(x=0;x<6;x++){
        printf("\n");
        for(y=0;y<6;y++){
            printf("%d ", M[x][y]);
        }
    }

}