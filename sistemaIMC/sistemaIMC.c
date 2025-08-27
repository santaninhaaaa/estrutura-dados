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
void exibirObesos(void);
void maiores170(void);
void entre2050(void);
void exibirSaudaveis(void);
void excluir50Menos(void);
void sugestaoPeso(void);
void sugestaoAltura(void);

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
			case 7:{
                exibirObesos();
                break;	
			}
			case 8:{
                maiores170();
                break;	
			}
			case 9:{
                entre2050();
                break;	
			}
			case 10:{
                exibirSaudaveis();
                break;	
			}
			case 11:{
                excluir50Menos();
                break;	
			}
			case 12:{
                sugestaoPeso();
                break;	
			}
			case 13:{
                sugestaoAltura();
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
	system("clear");
    int op;
    printf("\n\nGestao de IMC - Estrutura de Dados AMS Fatec Lins\n");    
    printf("\n");    
    printf("01) Inserir paciente\n");
    printf("02) Pesquisar paciente por nome\n");
    printf("03) Alterar um paciente\n");
    printf("04) Excluir um paciente\n");
    printf("05) Listar todos os pacientes\n");
    printf("06) Excluir todos os pacientes\n\n");

	printf("07) Exibir pacientes obesos\n");
	printf("08) Exibir pacientes maiores que 1.70 metros\n");
	printf("09) Exibir pacientes entre 20 e 50 anos\n");
	printf("10) Exibir pacientes saudaveis\n");
	printf("11) Excluir pacientes com menos de 50 kg\n");
	printf("12) Sugestao de peso pela altura\n");
	printf("13) Sugestao de altura pelo peso\n");
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

	getchar();
}

void listarTodosPacientes(void){
    struct paciente listPac;
    FILE *arqimc;
	arqimc = fopen("imc.bin", "rb");
    if (arqimc == NULL) {
        printf("Nenhum paciente cadastrado.\n");
		getchar();
		return;
    }

    printf("\nLista de pacientes cadastrados:\n\n");
	printf("NOME\t\tIDADE\tPESO\tALTURA\tIMC\n");
    while ((fread(&listPac, sizeof(listPac), 1, arqimc)) == 1)
    {
        printf("%s\t\t", listPac.nome);
        printf("%d\t", listPac.idade);
        printf("%.2f\t", listPac.peso);
        printf("%.2f\t", listPac.altura);
        printf("%.2f\n", listPac.imc);
    }

    fclose(arqimc);
	getchar();
}

void excluirPaciente(void){
    char nomeExcluir[50], op;
    struct paciente pac;
    int i = 0;
    FILE *arqimc;
	arqimc = fopen("imc.bin", "rb");
    if (arqimc == NULL) {
        printf("Nenhum paciente cadastrado.\n");
		getchar();	
		return;
    }

    printf("Digite o nome do paciente que deseja excluir: ");
    fgets(nomeExcluir, sizeof(nomeExcluir), stdin);
    nomeExcluir[strcspn(nomeExcluir, "\n")] = '\0';

	if (i != 1){
		printf("Paciente \"%s\" nao encontrado!\n", nomeExcluir);
		fclose(arqimc);
		getchar();
		return;
	} else {
		printf("NOME\t\tIDADE\tPESO\tALTURA\tIMC\n");
		while (fread(&pac, sizeof(pac), 1, arqimc) == 1){
			if(strcmp(pac.nome, nomeExcluir) == 0){
				i = 1;
				printf("%s\t\t", pac.nome);
				printf("%d\t", pac.idade);
				printf("%.2f\t", pac.peso);
				printf("%.2f\t", pac.altura);
				printf("%.2f\n", pac.imc);
			}
		}
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
	getchar();

}

void excluirTodosPacientes(void){

	FILE *arqimc;
	arqimc = fopen("imc.bin", "rb");
		
	if (arqimc == NULL){
		printf("Nao ha pacientes para excluir!\n");
		getchar();
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

	getchar();
 
}

void pesquisarPaciente(void){
    char nomePesquisar[50];
    struct paciente pac;
    int i = 0;
	FILE *arqimc;
	arqimc = fopen("imc.bin", "rb");
    if (arqimc == NULL) {
        printf("Nenhum paciente cadastrado.\n");
		getchar();
		return;
    }

    printf("\nDigite o nome do paciente que deseja localizar: ");
    fgets(nomePesquisar, sizeof(nomePesquisar), stdin);
    nomePesquisar[strcspn(nomePesquisar, "\n")] = '\0';

	if (i != 1){
		printf("Paciente \"%s\" nao encontrado!", nomePesquisar);
		fclose(arqimc);
	} else {
		printf("NOME\t\tIDADE\tPESO\tALTURA\tIMC\n");

		while (fread(&pac, sizeof(pac), 1, arqimc) == 1){
			if(strcmp(pac.nome, nomePesquisar) == 0){
				i = 1;
				printf("%s\t\t", pac.nome);
				printf("%d\t", pac.idade);
				printf("%.2f\t", pac.peso);
				printf("%.2f\t", pac.altura);
				printf("%.2f\n", pac.imc);
			}
		}
	}




	getchar();

	
}

void alterarPaciente(void){
    char nomePesquisar[50];
    struct paciente pac;
    int i = 0;
    FILE *arqimc, *temp;
	arqimc = fopen("imc.bin", "rb");
    if (arqimc == NULL) {
        printf("Nenhum paciente cadastrado.\n");
		getchar();
		return;
    }

	temp = fopen("temp.bin", "wb");
    if (temp == NULL) {
        printf("Nenhum paciente cadastrado.\n");
		getchar();
		return;
    }

    printf("\nDigite o nome do paciente que deseja alterar: ");
    fgets(nomePesquisar, sizeof(nomePesquisar), stdin);
    nomePesquisar[strcspn(nomePesquisar, "\n")] = '\0';

	if (i != 1){
		printf("Paciente \"%s\" nao encontrado!", nomePesquisar);
		fclose(arqimc);
		getchar();
		return;
	} else {
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
						pac.imc = pac.peso / pow(pac.altura, 2);
						break;
					}
					case 4:{
						printf("Digite o novo peso (em kg): ");
						scanf("%f", &pac.peso);
						getchar();
						pac.imc = pac.peso / pow(pac.altura, 2);
						break;
					}
					default:{
						printf("Opcao invalida!\n");
						return;
					}
				}
				printf("Paciente \"%s\" alterado com sucesso!\n", nomePesquisar);

			}
			fwrite(&pac, sizeof(pac), 1, temp);
		}
	}

	fclose(arqimc);
	fclose(temp);

	remove("imc.bin");
	rename("temp.bin", "imc.bin");

	getchar();
	
}

void exibirObesos(void){
    struct paciente listPac;
    FILE *arqimc;
	arqimc = fopen("imc.bin", "rb");
    if (arqimc == NULL) {
        printf("Nenhum paciente cadastrado.\n");
		getchar();
		return;
    }

    printf("\nLista de pacientes obesos cadastrados:\n\n");
	printf("NOME\t\tIDADE\tPESO\tALTURA\tIMC\n");
	while ((fread(&listPac, sizeof(listPac), 1, arqimc)) == 1)
	{
		if(listPac.imc >= 30){
			printf("%s\t\t", listPac.nome);
			printf("%d\t", listPac.idade);
			printf("%.2f\t", listPac.peso);
			printf("%.2f\t", listPac.altura);
			printf("%.2f\n", listPac.imc);
		}
	}


    fclose(arqimc);

	getchar();
}

void maiores170(void){
    struct paciente listPac;
    FILE *arqimc;
	arqimc = fopen("imc.bin", "rb");
    if (arqimc == NULL) {
        printf("Nenhum paciente cadastrado.\n");
		getchar();
		return;
    }

    printf("\nLista de pacientes maiores que 1.70 metros:\n\n");
	printf("NOME\t\tIDADE\tPESO\tALTURA\tIMC\n");
	while ((fread(&listPac, sizeof(listPac), 1, arqimc)) == 1)
	{
		if(listPac.altura > 1.70){
			printf("%s\t\t", listPac.nome);
			printf("%d\t", listPac.idade);
			printf("%.2f\t", listPac.peso);
			printf("%.2f\t", listPac.altura);
			printf("%.2f\n", listPac.imc);
		}
	}


    fclose(arqimc);

	getchar();
}

void entre2050(void){
    struct paciente listPac;
    FILE *arqimc;
	arqimc = fopen("imc.bin", "rb");
    if (arqimc == NULL) {
        printf("Nenhum paciente cadastrado.\n");
		getchar();
		return;
    }

    printf("\nLista de pacientes entre 20 e 50 anos:\n\n");
	printf("NOME\t\tIDADE\tPESO\tALTURA\tIMC\n");

	while ((fread(&listPac, sizeof(listPac), 1, arqimc)) == 1)
	{
		if(listPac.idade >= 20 && listPac.idade <= 50){
			printf("%s\t\t", listPac.nome);
			printf("%d\t", listPac.idade);
			printf("%.2f\t", listPac.peso);
			printf("%.2f\t", listPac.altura);
			printf("%.2f\n", listPac.imc);
		}
	}


    fclose(arqimc);

	getchar();
}

void exibirSaudaveis(void){
    struct paciente listPac;
    FILE *arqimc;
	arqimc = fopen("imc.bin", "rb");
    if (arqimc == NULL) {
        printf("Nenhum paciente cadastrado.\n");
		getchar();
		return;
    }

    printf("\nLista de pacientes saudaveis cadastrados:\n\n");
	printf("NOME\t\tIDADE\tPESO\tALTURA\tIMC\n");
	while ((fread(&listPac, sizeof(listPac), 1, arqimc)) == 1)
	{
		if(listPac.imc >= 18.5 && listPac.imc < 25){
			printf("%s\t\t", listPac.nome);
			printf("%d\t", listPac.idade);
			printf("%.2f\t", listPac.peso);
			printf("%.2f\t", listPac.altura);
			printf("%.2f\n", listPac.imc);
		}
	}


    fclose(arqimc);

	getchar();
}

void excluir50Menos(void){
	char op;
    struct paciente pac;
    int i = 0;
    FILE *arqimc;
	arqimc = fopen("imc.bin", "rb");
    if (arqimc == NULL) {
        printf("Nenhum paciente cadastrado.\n");
		getchar();
		return;
    }

	while (fread(&pac, sizeof(pac), 1, arqimc) == 1){
		if(pac.peso < 50){
			i = 1;
			printf("\nExcluindo ");
            printf("\"%s\" de %.2f kg", pac.nome, pac.peso);
		}
	}

	fclose(arqimc);

	if (i != 1){
		printf("Nao existe pacientes com menos de 50 kg\n");
		getchar();
		return;
	}

	printf("\n\nDeseja mesmo excluir esses pacientes?(S/N): ");
	scanf("%c", &op);

	if(op == 'N' || op == 'n'){
		printf("Operação cancelada!");
		getchar();
		return;
	} else if (op == 'S' || op == 's'){

		FILE *temp;
		temp = fopen("temp.bin", "wb");
		arqimc = fopen("imc.bin", "rb");

		while (fread(&pac, sizeof(pac), 1, arqimc) == 1) {
			if (pac.peso >= 50) {
				fwrite(&pac, sizeof(pac), 1, temp);
			}
		}

		fclose(arqimc);
		fclose(temp);

		remove("imc.bin");
		rename("temp.bin", "imc.bin");

		printf("Pacientes com menos de 50 kg excluidos com sucesso!\n");

	}

	getchar();

}

void sugestaoPeso(void){
	float altura, peso1, peso2;

	printf("Digite uma altura em metros: ");
	scanf("%f", &altura);

	peso1 = 18.5 * pow(altura, 2);
	peso2 = 24.9 * pow(altura, 2);

	printf("\nO peso ideal para pessoas de %.2f metros, seria entre %.2f kg e %.2f kg", altura, peso1, peso2);

	getchar();
 
}

void sugestaoAltura(void){
	float peso, altura1, altura2;

	printf("Digite um peso em quilos: ");
	scanf("%f", &peso);

	altura1 = sqrt(peso/18.5);
	altura2 = sqrt(peso/24.9);

	printf("\nA altura ideal para pessoas de %.2f quilos, seria entre %.2f m e %.2f m", peso, altura2, altura1);

	getchar();
 
}