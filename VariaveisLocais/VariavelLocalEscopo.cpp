#include <iostream>

int main()
{
	int i;
	for (i = 0; i < 5; i++)
	{
		int j = i + 2;
		std::cout << i << "  " << j << std::endl;
	
	// J foi declarado dentro do comando do bloco FOR - Quando o bloco For chegar ao fim, a variavel
	// será destruida
	}

	std::cout << i << " Valor Final " << std::endl;
	std::cout << j << " Valor Final " << std::endl;

	return 0;
}