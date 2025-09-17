/*

Crie um sistema com menu de opções que permita cadastrar pessoas (crie uma struct) com os seguintes campos:
- Nome (até 30 caracteres), 
- idade (int),
- altura (float) 

Grave os dados no arquivo pessoas.bin.

Adicione as seguintes funcionalidades:
- Exibir todos os registros 
- Buscar pessoa por nome
- Atualizar um registro pelo nome
- Remover um registro pelo nome
- Exportar dados do arquivo binário para um arquivo CSV (um registro por 
linha, separando os campos com ;)

Implementar funções específicas para mostrar:
- Número total de pessoas
- Média de idade
- Pessoa mais alta
- Pessoa mais velha

Utilize alocação dinâmica para manipular os dados

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int menu();
int contarRegistros();
void gravarPessoa(void);
void exibirRegistros(void);
void buscarPessoa(void);
void atualizarPessoa(void);
void deletarPessoa(void);
void exportarDados(void);

struct pessoa {
    char nome[30];
    int idade;
    float altura;
};

main(){
    int opcao;
    do {
        opcao = menu();
        switch(opcao){
            case 1:{ gravarPessoa(); break; }
            case 2:{ exibirRegistros(); break; }
            case 3:{ buscarPessoa(); break; }
            case 4:{ atualizarPessoa(); break; }
            case 5:{ deletarPessoa(); break; }
            case 6:{ exportarDados(); break; }
            case 0:{ printf("Encerrando o sistema...\n"); break; }
            default:{ printf("Opcao invalida, redigite!!!\n"); break;}
        }
    } while (opcao != 0);  
}

int menu(void){
    system("clear");
    int op;
    printf("--------- Sistema de Revisao ---------\n\n");
    printf("Selecione a opcao desejada:\n");
    printf("01 - Gravar Pessoa\n");
    printf("02 - Mostrar registros\n");
    printf("03 - Buscar pessoa\n");
    printf("04 - Atualizar Pessoa\n");
    printf("05 - Excluir Pessoa\n");
    printf("06 - Exportar .bin para CSV\n");
    printf("00 - Gravar Pessoa\n\n");
    printf("Digite sua opcao: ");
    scanf("%d", &op);
    getchar();
    return op;
}

int contarRegistros(FILE *revisao){
    struct pessoa P;
    int qtd = 0;

    rewind(revisao);//volta no começo do arquivo

    while(fread(&P, sizeof(struct pessoa), 1, revisao) == 1){
        qtd ++;
    }

    rewind(revisao);
    return qtd;
}

void gravarPessoa(void){
    system("clear");

    struct pessoa novaP;
    FILE *revisao;
    revisao = fopen("revisao.bin", "ab");

    if(revisao == NULL){ perror("Erro ao abrir o arquivo\n"); return;} 

    printf("----Cadastro de Pessoa----\n\n");
    printf("Nome da pessoa: ");
    fgets(novaP.nome, sizeof(novaP.nome), stdin);
    novaP.nome[strcspn(novaP.nome, "\n")] = '\0';
    printf("Idade da pessoa: ");
    scanf("%d", &novaP.idade);
    getchar();
    printf("Altura da pessoa (metros): ");
    scanf("%f", &novaP.altura);
    getchar();

    fwrite(&novaP, sizeof(struct pessoa), 1, revisao);
    fclose(revisao);

    printf("Registrado com sucesso!");

    getchar();
    
}

void exibirRegistros(void){
    FILE *revisao;
    revisao = fopen("revisao.bin", "rb");
    if(revisao == NULL){ perror("Erro ao abrir arquivo...\n"); return; }

    int qtd = contarRegistros(revisao);

    struct pessoa *lista;
    lista = (struct pessoa*) malloc (qtd * sizeof(struct pessoa));

    fread(lista, sizeof(struct pessoa), qtd, revisao);

    for(int i = 0; i < qtd; i++){
        printf("Nome: %s | Idade: %d | Altura: %.2fm\n", lista[i].nome, lista[i].idade, lista[i].altura);
    }

    free(lista);
    fclose(revisao);

    printf("Tecle Enter pra voltar ao menu...");
    getchar();
}

void buscarPessoa(void){}
void atualizarPessoa(void){}
void deletarPessoa(void){}
void exportarDados(void){}