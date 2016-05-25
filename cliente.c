#include <stdio.h>

struct cliente {
	char nome[41];	//até 40 caracteres
	int anoNascimento;	//qutro digitos
	char endereco[101];	//até 100 caracteres
	int conta;	//número da conta no vetor de contas
	char cgc[16];	//número no Cadastro Geral de Contribuintes (CGC)
} clientes[2000];

struct conta{
	int cliente;	//número do cliente no vetor de contas
	int anoAbertura;	//quatro digitos
	float saldo;	//em reais
} contas[2000];

int main()
{

	return 0;
}
