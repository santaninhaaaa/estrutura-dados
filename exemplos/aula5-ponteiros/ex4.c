#include <stdio.h>

main(){

    int x, *p, **q;
    x = 10;
    p = &x; //P armezando MEMÓRIA de X
    q = &p; //Q armezando MEMÓRIA de P, ou seja, de X

    printf("  x = %d\n", x); //mostra valor de X, normal
    printf(" *p = %d\n", *p); //mostra o valor APONTADO por P, ou seja, mostra X, por ter memória de X guardada
    printf("  p = %p\n", p); //mostra MEMÓRIA de P, no caso, a MEMÓRIA de X
    printf("**q = %d\n", **q); //mostra valor APONTADO por Q, ou seja, mostra o valor APONTADO por P, ou seja, mostra X
    printf(" *q = %p\n", *q);  //mostra MEMÓRIA APONTADO por Q, no caso, a MEMÓRIA de X
    printf("  q = %p\n", q); //mostra MEMÓRIA de Q, no caso, mostra MEMÓRIA de P

}