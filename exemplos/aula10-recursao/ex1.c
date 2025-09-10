//43340 NOTEBOOK TRAVOU

#include <stdio.h>

int fatrec(int n){
    printf("Chamando fatorial de %d >\n", n);
    if(n >= 0 && n <= 1){
        return 1;
    }
    return n * fatrec(n-1);
}

int main(){

    int n; //numero dado
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    printf("\nFatorial de %5d = %5d\n", n, fatrec(n));
}

// aqui ele vai retornar o chamando fatorial e diminuindo o valor enquanto se auto multiplica