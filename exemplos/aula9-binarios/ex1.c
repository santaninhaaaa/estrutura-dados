#include <stdlib.h>
#include <stdio.h>

main()
{

    FILE *arquivo;
    int i[5] = {1,2,3,4,5}, cont = 0;


    //FWRITE - WRITE BINARY
    if((arquivo = fopen("!ex1.dat", "wb")) == NULL){
        printf("Erro ao abrir o arquivo copia!\n");
    }

    //sizeof retorna qtd em bytes de um determinado tipo/variavel
    fwrite(&i, sizeof(int), 5, arquivo);
    fclose(arquivo);


    //FREAD - READ BINARY
    if((arquivo = fopen("!ex1.dat", "rb")) == NULL){
        printf("Erro ao abrir o arquivo copia!\n");
    }

    fread(&i, sizeof(int), 5, arquivo);

    for (cont; cont<5; cont++){
        printf("%d", i[cont]);
    }
    printf("\n");
    fclose(arquivo);

}