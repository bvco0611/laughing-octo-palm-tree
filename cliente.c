#include <stdio.h>

struct cliente {
	char nome[41];	//até 40 caracteres
	int idade;	//em anos
	char endereço[100];	//até 100 caracteres
	int conta;	//número da conta no vetor de contas
	int cgc;	//número no Cadastro Geral de Contribuintes (CGC)
} clientes[2000];

struct conta{
	int cliente;	//número do cliente no vetor de contas
	int tempo;	//em anos, desde a abertura da conta
	float saldo;	//em reais
} contas[2000];

int main()
{

	return 0;
}