# estrutura-dados

# Estruturas de Dados - Linguagem C - Aula 1

- **Funções:** if, else, for, while
- **Vetores**
- **Matrizes**
- **Structs / Ponteiros**

Programa de Articulação da Formação Profissional Média e Superior

```c
//bibliotecas importadas (podem ser importadas api's tbm)
#include <stdio.h> //para o funcionamento do scanf
#include <stdlib.h>

main() //funcao q pode chamar outras funçoes - OBRIGATORIO
{

    int n;

	printf("Digite um numero");
    scanf (”%d”, &n); //funcao de entrada - aguarda entrada do user e o %n vai ser armazenado na memoria
    //& ele scanea o ENDEREÇO de n
    printf(”O numero digitado foi = %d \n”, n);//funcao de saida - mostra o resultado na tela
    system(”PAUSE”); //isso é do proprio MS-DOS



	<stdio.h>

	%d -> int n;
	%f -> float n1;
	%c -> char c; //variavel char apenas
	%s -> char nome[50]; //vetor de caracteres de ate 50, string em outras linguas
    %p -> mostra a localização na memória em hexadecimal

	cada espaço da memoria é chamado de endereço q é reservado em hexadecimal
	ele obtem endereço de memoria -> &


}
```
**Linguagens compiladas:** - compila o arquivo e cria um executável  \
**Linguagens interpretadas:** - funciona em tempo de execução, tempo real

Para compilar o código é só digitar no terminal
```
gcc name.c -o nameexe

// e pra executar só fazer

./nameexe
```

# Vetores de Caracteres - Aula 2
**Strings:** tem seu último caractere como um '\0', esse campo é pra indicar que finalizou a string, seria um terminador
```c
//utiliza-se <conio.h> pro getch() como se fosse uma pausa, está apenas esperando um caractere

char stringName[tamanho];
char nome[7];
char rua[25];

//foi digitado José em nome[7], vai imprimir só os 4, J - O - S - É - \0

gets() //recebe string do teclado - scanf -> gets
puts() //envia uma string - printf -> puts (automaticamente pula de linha)

getch()//está aguardando um caracter
```
**putchar()** imprime um caracter da tabela ASCII praticamente  \
**getchar()** recebe um único caracter, tipo o scanf()
```c
char ch = 'A';
putchar(ch); //mostra variavel ch
putchar(65); //mostra letra A de acordo com o codigo ASCII
putchar('B'); //mostra a letra B
```
**getch()** - não exibe o que digitei  \
**getche()** - exibe o que digitei  \
Ambos não precisão do ENTER pra meio que abortar o programa

# Manipulação de String - Aula 3
**<string.h>** - biblioteca pra manipular as strings
```c
#include <string.h>
strlen(string) //retorna numero de caracteres, não levando em conta o terminador
strcat(string1, string2) //praticamente concatena
strcmp(string1, string2) //compara as duas strings, retorna 0 são iguais, ou outro number se string1 for menor ou maior(EM RELAÇÃO A ASCII)
strcpy(string1, string2) //stringcopy - conteudo da string2 SUBSTITUI/COPIA o valor para string1
strncpy(string1, string2, n) //copia ate N caracteres da str2 pra str1. if str2 for menor q N, preenche o restante do str1 com terminador nulo
strupr(string) //transforma stirng em CAIXA ALTA
strlwr(string) //transforma string em minusculo
atoi(string) //converte string com numero em inteiro. não tendo numero, retorna 0

#include <ctype.h>
toupper(variavel) //transforma UM caracter em MAIUSCULO
tolower(variavel) //transforma um caracter em minusculo
```

# Matrizes - Aula 4

```c

    MATRIZES

        0       1       2       3   X-

    0   a0.0     a0.1     a0.2     a0.3
    
    1   a1.0     a1.1     a1.2     a1.3

    2   a2.0     a2.1     a2.2     a2.3

    3   a3.0     a3.1     a3.2     a3.3

    YI

    int matriz[1][3] = a1.3

    for(x=0;x<4;x++){
        for (y=0;y<4;y++){
            scanf("%d", %matriz[x][y]);
        }
    }

```

# Ponteiros (& e *) - Aula 5

É um recurso que utilizamos na linguagem chamado de apontador, um tipo de variável especial. Armazena o **ENDEREÇO DE POSIÇÃO DE MEMÓRIA** \
\
A memória RAM é endereçada, dividido em páginas. Cada dado da memória, ocupa uma página. Os endereços de memória são hexadecimais.
0-9 até A-F \
Variável do tipo ponteiro, **APONTA** outra variável, NÃO ARMAZENA VALORES, armazena apenas.

| 0001F8 | 0001F7 | 0001F6 | 0001F5 | 0001F4 | 0001F3 | 0001F2 | 0001F1 | 0001F0 |
| ------ | ------ | ------ | ------ | ------ | ------ | ------ | ------ | ------ | 
| 0001F1 | | | | | | 10 | 5 | SO |
| x | | | | | | n | i | |

```
RAM

// 0001F2 é o ENDEREÇO DA MEMÓRIA

int *x;
printf("%d", n); //mostra 10
printf("%d", &n); //mostra 0001F2

pri

```

**Uso do operador &** \
Devolve endereço de memória, representado pelo caractere &, ele é **unário** por necessidar de um operador \

Exemplo ``` exemplo-ponteiro-aula5.c ```

**Uso do operador (*)** \
Devolve conteúdo da variável \

Exemplo ``` exemplo-ponteiro-aula5.c ```

# Funções - Aula 6
Você pode chamar sua função diversas vezes

```c 
    main(){ //fazendo uma chamada da função soma

    soma(a,b);

    }

    int soma(...){ //fazendo uma chamada da função exibir

        exibir(res);

    }

    float exibir(...){

        //conteudo

    }
    
```
**Passagem de parâmetro por valor** \

O valor é exatamente copiado para a função
```c
#include <stdio.h>
int soma_dobro(int a, int b); //escopo da função declarado antes da main

main(){
    int x, y, res;

    //solicitando inteiros x e y para serem completados
    //x = 5 e y = 3

    res = soma_dobro(x,y); //5,3
    //os exatos valores de X e Y são copiados para a função em A e B

    printf("a soma do dobro de %d e %d = %d", x,y,res)
    //a soma do dobro de 5 e 3 = 16
}
//função apos a main
int soma_dobro(int a, int b){
    int soma;
    a = 2*a;//5=10
    b = 2*b;//3=6
    soma = a + b;//16 = 10+6
    return soma;
}

//as funções podem ser começadas antes da main
//se começadas após a main, deve ter um escopo anteriormente a main
//assim que acaba a função, ela é terminada

```
**Passagem de parâmetro por referência = Ponteiros** \
```c
#include <stdio.h>
int soma_dobro(int *a, int *b); //escopo da função declarado antes da main

main(){
    int x, y, res;

    //solicitando inteiros x e y para serem completados
    //x = 5 e y = 3

    res = soma_dobro(&x,&y); //00002, 00001
    //vc está utilizando o ENDEREÇO DE MEMORIA nao o valor
    //o valor é substituido, x e y serão sobrescritos

    printf("a soma do dobro de %d e %d = %d", x,y,res);
    //a soma do dobro de 10 e 6 = 16
}
//função apos a main
int soma_dobro(int *a, int *b){ //aqui aconteceu como uma SUBSTITUIÇÃO, os valores foram atualizados
    int soma;
    *a = 2*(*a);
    *b = 2*(*b);
    soma = *a + *b;
    return soma;
}

```

# Structs (Estruturas ou registros) - Aula 7

Vertores e matrizes possuem estruturas de dados homogêneas que armazenam vários valores, mas todos de um mesmo tipo. \
É comum conjunto de ados de tipos deiferentes. Exemplo: ficha de cadaastro de alunos.

```
Ficha do Aluno
    Nome: string
    Endereço: string
    Telefone: string
    RA: int
    Mensalidade: float

    //conseguimos criar uma struct pra armazenar isso tudo
```

**Struct:** conjunto de variáveis de tipos iguais ou distintos. As variáveis são chamadas de membros/campos/elementos. \
Exemplo:
```
pessoa -> nome, idade, endereço.
data -> dia, mes, ano.
```

## Sintaxe em C

```c
struct <identificador>{
    tipo <membro1>;
    tipo <membro2>;
    ...
    tipo <membroN>;
}<nome da variavel que representa struct>;

struct data{
    int dia;
    int mes;
    int ano;
} amanha, feriado;

/*  OU  */

main(){
    struct data hoje;
}

```

**Para a atribuição de valores podem ser feitos da seguinte forma**

```c
struct data{
    int dia;
    int mes;
    int ano;
} amanha, feriado;

hoje.dia = 07;
hoje.mes = 05;
hoje.ano = 2025;

/*  OU  */

struct data hoje ={07,05,2025};

//pra obter leitura
scanf("%d", &amanha.dia);
//pra printar
printf("%d", amanha.dia)

```

Structs podem conter structs

# Arquivos - Aula 8

Sistemas de E/S podem ser implementados em representação **.bin (binário)** ou em arquivo **.txt (texto)**.

Temos a possibilidade de gravar nossas saídas do código, ao invés de executar e os dados serem perdidos. 

Essa abstração entre programador e o dispositivo utilizado é chamado de **stream** *(fluxo)* e o dispositivo real é chamado de **arquivo**. 

É importante entender como streams e arquivos se integram.

No Banco de Dados, isso pe bastante utilizado, para podermos localizar. Gravação em **.txt** é fácil, porém sua recuperação é trabalhosa.

A gravação do arquivo, tanto faz tanto fez, pode estar em um HD, pendrive. Essa **stream** é independente do dispositivo, sendo a stream de **texto** e **binário**

- **Stream de Texto (.txt)**: Uma sequência de caracteres, literalmente um arquivo de texto, sendo fácil pra gravação, mas difícil de recuperar.
- **Stream de Binário (.bin)**: Uma sequência de bytes, praticamente como se fosse blocos, structs, sendo mais fácil para gravação e recuperação.

As funções vão começar com o prefixo **"f"**, referindo à ***files***.

```c
fopen() //função pra fazer abstração do arquivo físico para o código fonte

a = fopen("arquivo.txt", "r"); //("nome do arquivo", "modo de abertura");


"r" -> abre arquivo .txt para leitura
"w" -> abre arquivo .txt para escrita, se houver outro arquivo com o mesmo nome, vai ser sobrescrito
"a" -> abre arquivo .txt para anexar, se não existir, será criado

"rb" -> abre arquivo .bin para leitura
"wb" -> abre arquivo .bin para escrita, se houver outro arquivo com o mesmo nome, vai ser sobrescrito
"ab" -> abre arquivo .bin para anexar, se não existir, será criado

```
## Funções 

```c

fclose(a) //fecha arquivo
fputc('x', a) ou putc('x', a); //escreve um char de um arquivo
ch = fgetc(a) ou ch = getc(a) //lê char de um arquivo
fgets(variavel, tamanho int, FILE) //lê string
fprintf(a, "%c", ch) //escreve dados em um arquivo no formato indicado
fscanf(a, "%d", &n) //lê dados em um arquivo no formato indicado

```

### Outras funções
```c
fseek() //posiciona em um byte especifico de um arquivo
feof() //return true se o fim do arquivo for atingido "end of file"
ferror() //return true se ocorreu erro

rewind() //recoloca o indicador de posição no inicio do arquivo
remove() //apaga um arquivo

fflush() //descarrega buffer associado com o arquivo
fread() //lê os dados em binario
fwrite() //escreve dados em binario

```
## Exemplo
```c

main(){

FILE *arquivo; //atribuimos uma variavel ponteiro do tipo FILE
arquivo=fopen("texto.txt","r"); //atribuindo variavel para abrir file como leitura
if(arquivo==NULL){ //se nn existir emite mensagem
    printf("Inpossivel abrir o arquivo\n");
} else { //senão, se exisir, emite mensagem
    printf("Arquivo aberto com sucesso\n");
    fclose(arquivo); //fecha arquivo
}

}


main(){

    FILE *fp;
    int i = 0;
    char c;

    fp = fopen("!texto.txt", "r"); //abrindo file pra leitura

    //contar os caracteres do file

    while ((c = fgetc(fp)) != EOF){ //char = leitura de UM char do arquivo, enquanto não for o final do arquivo
        putchar(c); //retorna char gravado no .txt
        i++; //incrementa um
    } 

    printf("\nNo arquivo text.txt tem total de %d caracteres\n",i); //imprime qtd de caracteres
    fclose(fp); //fecha arquivo
}


```

# Arquivos Binários - Aula 9

Utilizado para **manipular** structs. Ocupando menos bytes que .txt
Utiliza a tabela **<stdlib.h>**

```c
fread(variavel, tam_bytes, qtd, arquivo)

fwrite(variavel, tam_bytes, qtd, arquivo)

// tam_bytes é um valor que define o número de bytes da estrutura que deve ser lida/escrita

// qtd é o número de estruturas que deve ser lida/escrita
```
> Acompanhar exemplo em ex1.c

## Parâmetros

Posicionando o cursor em determinada posição do arquivo:

```c
int fseek (FILE *arquivo, int numbytes, int modo);
```

- **Deslocamento:** quantidade ***em bytes*** que deseja deslocar para o posicionamento do cursor (que pode ser negativo)
- **Modo:** forma do deslocamento que pode ser:
- - **SEEK_SET:** posição inicial do arquivo
- - **SEEK_CUR:** posição corrente do arquivo
- - **SEEK_END:** posição final do arquivo \
Se for retornado 0, foi possível fazer o deslocamento

```c
// no final do arquivo
fseek (arquivo, 0, SEEK_END);

// posição específica
scanf ("%d", &posicao);
fseek (arquivo, (posicao-1) * sizeof(struct notas), SSEK_SET);
```
> Acompanhar exemplo em **ex2.c pra gravar aquivo em binário**, acompanhar exemplo em **ex3.c pra ler arquivo em binário** e acompanhar exemplo em **ex4.c pra ler uma posição específica**