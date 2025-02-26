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
    printf(”O numero digitado foi = %d \n”, n);//funcao de saida - mostra o resultado na tela
    system(”PAUSE”); //isso é do proprio MS-DOS


/*
	<stdio.h>

	%d -> int n;
	%f -> float n1;
	%c -> char c; //variavel char apenas
	%s -> char nome[50]; //vetor de caracteres de ate 50, string em outras linguas

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
strupr(string) //transforma stirng em CAIXA ALTA
strlwr(string) //transforma string em minusculo

#include <ctype.h>
toupper(variavel) //transforma UM caracter em MAIUSCULO
tolower(variavel) //transforma um caracter em minusculo
```