#include <iostream>
#include <locale.h>
#include "FuncoesMenu.h"

void ExibirMenu()
{
	setlocale(LC_ALL, "portuguese");
	int escolha = 0;
	do // as instru��es abaixo ser�o executadas pelo menos uma vez!
	{
		std::cout << "****Tickets Cinema****" << std::endl;
		std::cout << "\n1 - Para Meia Entrada\n";
		std::cout << "\n2 - Para Inteira\n";
		std::cout << "\n3 - Sair";
		std::cout << "\nEscolha sua op��o: ";
		std::cin >> escolha;
		if ((escolha != 1) && (escolha != 2) && (escolha != 3))
			escolha = 3;
		ProcessarEscolha(escolha);
		std::cout << escolha << "\n";

	} while (escolha != 3);//enquanto escolha for diferente de 3 o menu vai aparecer! pois voc� est� solicitando que fique em loop at� que escolha seja igual a 3 e resultado seja falso saindo do loop do-while
}

void ProcessarEscolha(int TipoEscolha)
{
	switch (TipoEscolha)
	{
	case 1: std::cout << "\nTicket Meia Entrada Comprada\n\n";
		break;
	case 2: std::cout << "\nTicket Inteira Comprado\n\n";
		break;
	case 3: std::cout << "\nSaindo Menu Tickets...\n\n";
		break;
	default: {std::cout << "\nOp��o Inv�lida!!!\n";
		system("PAUSE"); }
	}
}