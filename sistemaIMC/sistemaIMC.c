#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int menu();
void gravarPaciente(void);
void excluirPaciente(void);
void listarTodosPacientes(void);
void excluirTodosPacientes(void);
void pesquisarPaciente(void);
void alterarPaciente(void);

struct paciente {
    char nome[50];
    int idade;
    float altura;
    float peso;
    float imc;
};

main()
{
    int opcao;
    do
    {
        opcao = menu();
        switch (opcao)
        {
            case 1:{
				gravarPaciente();
				break;
			}
            case 2:{
				pesquisarPaciente();
				break;
			}
			case 3:{
				alterarPaciente();
				break;
			}
			case 4:{
				excluirPaciente();
				break;
			}
            case 5:{
                listarTodosPacientes();
                break;	
			}
			case 6:{
                excluirTodosPacientes();
                break;	
			}
            case 0:{
                printf("Encerrando...\n");
                break;      
			}          
            default:{
                printf("Opcao invalida. Redigite!!!\n");
                break;
			}
        }    
    } while (opcao != 0);
}

int menu(void)
{
    int op;
    printf("\n\nGestao de IMC - Estrutura de Dados AMS Fatec Lins\n");    
    printf("\n");    
    printf("1) Inserir paciente\n");
    printf("2) Pesquisar paciente por nome\n");
    printf("3) Alterar um paciente\n");
    printf("4) Excluir um paciente\n");
    printf("5) Listar todos os pacientes\n");
    printf("6) Excluir todos os pacientes\n");
    printf("0) Finalizar o sistema\n");
    printf("\nDigite a opcao desejada: ");
    scanf("%d", &op);
    getchar();
    return op;
}

void gravarPaciente(void){
    struct paciente newPac;
    FILE *arqimc; 
	arqimc = fopen("imc.bin", "ab");

    if (arqimc == NULL) {
        perror("Erro ao abrir o arquivo");
    }

    printf("Nome do paciente: ");
    fgets(newPac.nome, sizeof(newPac.nome), stdin);
    newPac.nome[strcspn(newPac.nome, "\n")] = '\0';
    printf("Idade do paciente: ");
    scanf("%d", &newPac.idade);
    getchar();

    printf("Altura do paciente (em metros): ");
    scanf("%f", &newPac.altura);
    getchar();

    printf("Peso do paciente (em kg): ");
    scanf("%f", &newPac.peso);
    getchar();

    newPac.imc = newPac.peso / pow(newPac.altura, 2);

    printf("IMC do paciente: %.2f\n", newPac.imc);
    printf("\nPaciente cadastrado com sucesso!\n");

    fwrite(&newPac, sizeof(struct paciente), 1, arqimc);
    fclose(arqimc);
}

void listarTodosPacientes(void){
    struct paciente listPac;
    FILE *arqimc;
	arqimc = fopen("imc.bin", "rb");
    if (arqimc == NULL) {
        printf("\nNenhum paciente cadastrado ainda.\n");
		return;
    }

    printf("\nLista de pacientes cadastrados:\n\n");
    while ((fread(&listPac, sizeof(listPac), 1, arqimc)) == 1)
    {
        printf("Nome do paciente: %s\n", listPac.nome);
        printf("Idade: %d\n", listPac.idade);
        printf("Peso: %.2f\n", listPac.peso);
        printf("Altura: %.2f\n", listPac.altura);
        printf("IMC: %.2f\n", listPac.imc);
        printf("-----------------------------\n");
    }

    fclose(arqimc);
}

void excluirPaciente(void){
    char nomeExcluir[50], op;
    struct paciente pac;
    int i = 0;

    printf("Digite o nome do paciente que deseja excluir: ");
    fgets(nomeExcluir, sizeof(nomeExcluir), stdin);
    nomeExcluir[strcspn(nomeExcluir, "\n")] = '\0';

    FILE *arqimc;
	arqimc = fopen("imc.bin", "rb");
    if (arqimc == NULL) {
        printf("Nenhum paciente cadastrado.\n");
		return;
    }

	while (fread(&pac, sizeof(pac), 1, arqimc) == 1){
		if(strcmp(pac.nome, nomeExcluir) == 0){
			i = 1;
			printf("\nPaciente encontrado:\n");
            printf("Nome: %s\n", pac.nome);
            printf("Idade: %d\n", pac.idade);
            printf("Altura: %.2f\n", pac.altura);
            printf("Peso: %.2f\n", pac.peso);
            printf("IMC: %.2f\n\n", pac.imc);
		}
	}
	if (i != 1){
		printf("Paciente \"%s\" nao encontrado!\n", nomeExcluir);
		fclose(arqimc);
		return;
	}

	printf("Deseja mesmo excluir esse paciente?(S/N): ");
	scanf("%c", &op);
	getchar();

	if(op == 'N' || op == 'n'){
		printf("Operação cancelada!");
		fclose(arqimc);
	} else if (op == 'S' || op == 's'){

		FILE *temp;
		temp = fopen("temp.bin", "wb");
		arqimc = fopen("imc.bin", "rb");

		while (fread(&pac, sizeof(pac), 1, arqimc) == 1) {
			if (strcmp(pac.nome, nomeExcluir) != 0) {
				fwrite(&pac, sizeof(pac), 1, temp);
			} else {
				i = 1;
			}
		}

		fclose(arqimc);
		fclose(temp);

		remove("imc.bin");
		rename("temp.bin", "imc.bin");

		if (i){
			printf("Paciente \"%s\" excluido com sucesso!\n", nomeExcluir);
		}else{
			printf("Paciente \"%s\" nao encontrado.\n", nomeExcluir);
		}

	}

}

void excluirTodosPacientes(void){

	FILE *arqimc;
	arqimc = fopen("imc.bin", "rb");
		
	if (arqimc == NULL){
		printf("\nNao ha pacientes para excluir!\n");
		return;
	} else {
		char op;

		printf("Deseja mesmo excluir TODOS os pacientes?(S/N): ");
		scanf("%c", &op);
		getchar();

		if(op == 'N' || op == 'n'){
			printf("Operação cancelada!");
		} else if (op == 'S' || op == 's'){
			remove("imc.bin");
			printf("Todos os pacientes foram excluídos com sucesso!\n");
		}
	}
 
}

void pesquisarPaciente(void){
    char nomePesquisar[50];
    struct paciente pac;
    int i = 0;

    printf("\nDigite o nome do paciente que deseja localizar: ");
    fgets(nomePesquisar, sizeof(nomePesquisar), stdin);
    nomePesquisar[strcspn(nomePesquisar, "\n")] = '\0';

    FILE *arqimc;
	arqimc = fopen("imc.bin", "rb");
    if (arqimc == NULL) {
        printf("Nenhum paciente cadastrado.\n");
		return;
    }

	while (fread(&pac, sizeof(pac), 1, arqimc) == 1){
		if(strcmp(pac.nome, nomePesquisar) == 0){
			i = 1;
			printf("\nPaciente encontrado:\n");
            printf("Nome: %s\n", pac.nome);
            printf("Idade: %d\n", pac.idade);
            printf("Altura: %.2f\n", pac.altura);
            printf("Peso: %.2f\n", pac.peso);
            printf("IMC: %.2f\n\n", pac.imc);
			return;
		}
	}

	if (i != 1){
		printf("Paciente \"%s\" nao encontrado!", nomePesquisar);
		fclose(arqimc);
	}

	
}

void alterarPaciente(void){
    char nomePesquisar[50];
    struct paciente pac;
    int i = 0;

    printf("\nDigite o nome do paciente que deseja alterar: ");
    fgets(nomePesquisar, sizeof(nomePesquisar), stdin);
    nomePesquisar[strcspn(nomePesquisar, "\n")] = '\0';

    FILE *arqimc;
	arqimc = fopen("imc.bin", "rb");
    if (arqimc == NULL) {
        printf("Nenhum paciente cadastrado.\n");
		return;
    }

	while (fread(&pac, sizeof(pac), 1, arqimc) == 1){
		if(strcmp(pac.nome, nomePesquisar) == 0){
			i = 1;
			int op;
			printf("\nPaciente encontrado:\n");
            printf("1) Nome: %s\n", pac.nome);
            printf("2) Idade: %d\n", pac.idade);
            printf("3) Altura: %.2f\n", pac.altura);
            printf("4) Peso: %.2f\n", pac.peso);

			printf("\nQual dado deseja alterar no paciente \"%s\"?: ", nomePesquisar);
			scanf("%d", &op);
			getchar();


			switch(op){
				case 1:{
					printf("Digite o novo nome: ");
					fgets(pac.nome, sizeof(pac.nome), stdin);
					pac.nome[strcspn(pac.nome, "\n")] = '\0';
					break;
				}
				case 2:{
					printf("Digite a nova idade: ");
					scanf("%d", &pac.idade);
					getchar();
					break;
				}
				case 3:{
					printf("Digite a nova altura (em metros): ");
					scanf("%f", &pac.altura);
					getchar();
				}
				case 4:{
					printf("Digite o novo peso (em kg): ");
					scanf("%f", &pac.peso);
					getchar();
					break;
				}
				default:{
					printf("Opcao invalida!\n");
					return;
				}
			}









		}
	}

	if (i != 1){
		printf("Paciente \"%s\" nao encontrado!", nomePesquisar);
		fclose(arqimc);
	}

	
}
