# estrutura-dados

# Estruturas de Dados - Linguagem C

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


/*
	<stdio.h>

	%d -> int n;
	%f -> float n1;
	%c -> char c; //variavel char apenas
	%s -> char nome[50]; //vetor de caracteres de ate 50, string em outras linguas
    %p -> mostra a localização na memória em hexadecimal

	cada espaço da memoria é chamado de endereço q é reservado em hexadecimal
	ele obtem endereço de memoria -> &
*/


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

# Vetores de Caracreres
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

# Manipulação de String
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

# Matrizes - AULA 4

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

## Ponteiros (& e *)

É um recurso que utilizamos na linguagem chamado de apontador, um tipo de variável especial. Armazena o ENDEREÇO DE POSIÇÃO DE MEMÓRIA \
A memória RAM é endereçada, dividido em páginas. Cada dado da memória, ocupa uma página. Os endereços de memória são hexadecimais.
0-9 até A-F \
Variável do tipo ponteiro, APONTA outra variável, NÃO ARMAZENA VALORES, armazena apenas 

```
RAM
_______________________________0001F2___0001F1_______
| 0001F1  |   |   |   |   |   |    10  |    5  | SO |
---x-------------------------------n--------i--------
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