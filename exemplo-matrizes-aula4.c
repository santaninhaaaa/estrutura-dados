#include <stdio.h>

main(){

    int matriz[4][4]; //matriz de 4x4
    int x,y;

    for(x=0;x<4;x++){ //for pra contar x e y
        for(y=0;y<4;y++){
            if (x == y){ matriz[x][y] = 1; } else { matriz[x][y] = 0;}  //se x for igual a y vai mostrar 1
        }
    }

    for (x=0;x<4;x++){ //for pra mostrar x e y
        printf("\n");
        for(y=0;y<4;y++){
            printf ("%d ", matriz[x][y]); // imprimindo matriz
        }
    }

        /*

    RESULTADO

    1 0 0 0 
    0 1 0 0 
    0 0 1 0 
    0 0 0 1 
    
    */

    /*EXEMPLO DOIS - DAMA*/

    int dama[8][8];
    int x,y;

    for(x=0;x<8;x++){
        for(y=0;y<8;y++){

            if ((x<3) && ((x+y)%2 == 1)){
                dama[x][y] = 1; 
            }
            else if ((x>4) && ((x+y)%2 == 1)){
                dama[x][y] = 2;
            }
            else {
                dama[x][y] = 0;
            }

        }
    }

    for (x=0;x<8;x++){
        printf("\n");
        for (y=0;y<8;y++){
            printf("%d ", dama[x][y]);
        }
    }

    /*

    RESULTADO

    0 1 0 1 0 1 0 1 
    1 0 1 0 1 0 1 0 
    0 1 0 1 0 1 0 1 
    0 0 0 0 0 0 0 0 
    0 0 0 0 0 0 0 0 
    2 0 2 0 2 0 2 0 
    0 2 0 2 0 2 0 2 
    2 0 2 0 2 0 2 0
    
    */

}