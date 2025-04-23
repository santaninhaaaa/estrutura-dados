int soma(int a, int b){ //parametros q sao recebidos na função soma - VAI OBRIGATORIAMENTE RETORNAR UM DADO INTEIRO
    int s; //apenas reconhecida dentro da função soma - variavel privada respectivamente da função soma
    s = a+b; //resultado armazenado
    return s; //vai retornar s ao programa principal - quem fez a chamada puxa esse return
} //em C é possivel apenas return UNICO

main(){
    int n,a,b;
    n = soma(a,b);
}

float divisao(int dividendo, int divisor){
    float q;
    q = dividendo/divisor;
    return q;
}

void multiplicaco(float multiplicando, float multiplicador){ //utilizando o void, NÃO TEM RETORNO DE NADA - TEM Q USAR VOID
    float produto;
    produto = multiplicando*multiplicador;
    printf("%f", produto);
    getch();
} 