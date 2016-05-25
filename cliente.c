#include <stdio.h>
#include <string.h>

struct cliente {
	char nome[41];		//até 40 caracteres
	int anoNascimento;	//qutro digitos
	char endereco[101];	//até 100 caracteres
	int conta;		//número da conta no vetor de contas
	char cgc[16];		//número no Cadastro Geral de Contribuintes (CGC)
} clientes[2000];

struct conta{
	int cliente;		//número do cliente no vetor de contas
	int anoAbertura;	//quatro digitos
	float saldo;		//em reais
} contas[2000];

int main()
{
	strcpy(clintes[0].nome, "Deus");
	clintes[0].anoNascimento = 1997;
	clintes[0].endereco, "Paraíso, Meu Harém, Terra");
	clintes[0].conta = 0;
	clintes[0].cgc, "123.123.123-12");

	strcpy(clintes[1].nome, "Jesus Cristo");
	clintes[1].anoNascimento = 2000;
	clintes[1].endereco, "Casa, Dele");
	clintes[1].conta = 1;
	clintes[1].cgc, "321.321.321-32");

	strcpy(clintes[2].nome, "Sei lá");
	clintes[2].anoNascimento = 1990;
	clintes[2].endereco, "To, Sem, Criatividade");
	clintes[2].conta = 2;
	clintes[2].cgc, "666.666.666-66");

	contas[0].cliente = 0;
	contas[0].anoAbertura = 2014;
	contas[0].saldo = 100.00;

	contas[1].cliente = 1;
	contas[1].anoAbertura = 2010;
	contas[1].saldo = 200.00;

	contas[3].cliente = 3;
	contas[3].anoAbertura = 2012;
	contas[3].saldo = 300.00;
	return 0;
}
