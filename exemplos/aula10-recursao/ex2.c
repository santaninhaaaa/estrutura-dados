//32382 TRAVOU

#include <stdio.h>

int par(int n);
int impar(int n);

int par(int n){
    int par;
    par = n;
    if (par == 0){
        printf("Par\n");
    } else {
        impar(par-1);
    }
}

int impar(int n){
    int impar;
    impar = n;
    if (impar == 0){
        printf("Impar\n");
    } else {
        par(impar-1);
    }
}

int main(){

    int n; //numero dado
    printf("Digite um numero: ");
    scanf("%d", &n);
    par(n);
}

//aqui dependendo do numero que vc digitar, ele vai se auto subtraindo, até chagar a 0, que vai ser ou par, ou impar