/*
Faça um programa que leia do usuário um conjunto de 30 números inteiros.
Crie 2 vetores com 5 posições cada. A cada leitura dos números, o programa
deve verificar o número, se for par, armazena no vetor1, se for ímpar armazena 
no vetor2. Se os vetores estiverem preenchidos, não poderá mais armazenar 
números nele, consequentemente, abortar a digitação dos números do usuário.
Com os vetores preenchidos, grave as informações, respectivamente, em 2 
arquivos separados, “par.txt” e “impar.txt”.
*/
#include <stdio.h>

main(){

int vetor1[5];
int vetor2[5];
int num[30], p = 0, im = 0;

FILE *par;
par = fopen("!par.txt", "w");
if(par == NULL){ printf("IMPOSSIVEL ABRIR!\n"); }

FILE *impar;
impar = fopen("!impar.txt", "w");
if(impar == NULL){ printf("IMPOSSIVEL ABRIR!\n"); }

printf("Digite 30 numeros inteiros\n");

for (int i = 0; i < 30; i++){
    scanf("%d", &num[i]);

    if (num[i] % 2 == 0 && p < 5) {
        vetor1[p] = num[i];
        fprintf(par, "%d\n", vetor1[p]);
        p++;
    } else if (num[i] % 2 != 0 && im < 5) {
        vetor2[im] = num[i];
        fprintf(impar, "%d\n", vetor2[im]);
        im++;
    }

    if (p == 5 && im == 5) {
        break;
    }
    

}

fclose(par);
fclose(impar);

printf("5 numeros pares e 5 numeros impares foram salvos em arquivos diferentes!\n");


}