#include <iostream>
#include "Matematica.h"
#include <cmath>

using namespace std;


int main()
{
	int numero1, numero2;
	cout << "\nDigite o primeiro numero: ";
	cin >> numero1;
	cout << "\nDigite o segundo numero: ";
	cin >> numero2;
	cout << "\nSoma: " << soma(numero1, numero2);
	cout << "\nSubt: " << subtracao(numero1, numero2);
	cout << "\nDivi: " << divisao(numero1, numero2);
	cout << "\nMult: " << multiplicacao(numero1, numero2);
	cout << "\nPote: " << potencia(numero1, numero2);
	cout << "\nRaiz1: " << raizquadrada(numero1);
	cout << "\nRaiz2: " << raizquadrada(numero2);

			return 0;


}