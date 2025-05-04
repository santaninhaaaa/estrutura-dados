#include <stdio.h>
// O trecho de código a seguir possui um erro. Faça a correção.
/*

main() {
int x, *p;
x = 100;
p = x;
printf("Valor de p: %d.\n", *p);
}

*/

main() {
    int x, *p;
    x = 100;
    p = &x;
    printf("Valor de p: %d.\n", *p);
    }