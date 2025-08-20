#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int menu();
void gravarPaciente(void);
void listarTodosPacientes(void);

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
			case 1:
			{
				gravarPaciente();
				break;
			}
			case 5:
			{
				listarTodosPacientes();
				break;
			}
			case 0:
			{
				printf("Encerrando...");
				break;				
			}
			default:
			{
				printf("Opcao invalida. Redigite!!!");
				break;
			}
		}	
	} while (opcao != 0);
}

int menu(void)
{
	int op;
	system("cls");
	printf("Gestao de IMC - Estrutura de Dados AMS Fatec Lins");	
	printf("\n\n\n");	
	printf("1) Inserir paciente\n");
	printf("2) Pesquisar paciente por nome\n");
	printf("3) Alterar um paciente\n");
	printf("4) Excluir um paciente\n");
	printf("5) Listar todos os pacientes\n");
	printf("6) Excluir todos os pacientes\n");
	printf("0) Finalizar o sistema\n");
	printf("\n\nDigite a opcao desejada: ");
	scanf("%d", &op);
	return op;
}

void gravarPaciente(void)
{
	struct paciente newPac;
	FILE *arqimc;
	arqimc = fopen("imc.bin", "ab");
	printf("Nome do paciente: ");
	fflush(stdin);
	gets(newPac.nome);
	printf("Idade do paciente: ");
	scanf("%d", &newPac.idade);
	printf("Altura do paciente: ");
	scanf("%f", &newPac.altura);
	printf("Peso do paciente: ");
	scanf("%f", &newPac.peso);
	newPac.imc = newPac.peso / pow(newPac.altura, 2);
	printf("IMC do paciente: %.2f\n", newPac.imc);
	printf("\n\n Paciente cadastrado com sucesso!!! \n\n\n");
	fwrite(&newPac, sizeof(struct paciente), 1, arqimc);
	fclose(arqimc);
}
void listarTodosPacientes(void)
{
	struct paciente listPac;
	FILE *arqimc;
	arqimc = fopen("imc.bin", "rb");
	printf("\nLista de pacientes cadastrados: \n\n");
	while((fread(&listPac, sizeof(listPac), 1, arqimc)) == 1)
	{
		printf("Nome do paciente: %s \n", listPac.nome);
		printf("Idade: %d \n", listPac.idade);
		printf("Peso: %.2f \n", listPac.peso);
		printf("Altura: %.2f \n", listPac.altura);
		printf("IMC: %.2f \n\n", listPac.imc);
	}
	fclose(arqimc);
}

