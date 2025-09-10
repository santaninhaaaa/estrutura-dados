#include <stdio.h>
#include <stdlib.h>

int main(){

    char *w;
    int i, n=100;

    w = (char *)(malloc(100*sizeof(char)));

    if(w == NULL){
        printf("\nErro para alocacao de memoria\n");

    }

    for (i = 100; ; i=i*2){
        w = (char *)(realloc(w, i*sizeof(char)));
        if(w == NULL){
            printf("\nErro para alocacao de memoria\n");
            exit(0);
        } else {
            printf("Alocado %d\n", i);
        }
    }

    free(w);
}