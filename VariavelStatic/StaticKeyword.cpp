#include <iostream>
using namespace std;

int ContadorChamadas()
{

 static int NumChamadaFuncao = 0;
	NumChamadaFuncao++;
	return NumChamadaFuncao;

}

int main()
{

	for (int i = 0; i < 5; i++)
	{
				cout << ContadorChamadas() << endl;
	
	
	}
	
	return 0;
	


}