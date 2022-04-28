#include <iostream>
using namespace std;

int main()
{
	int senha, i=0;
	
	while (i <= 1)
	{	
		cin >> senha;
		if (senha == 2002)
		{
			cout << "Acesso Permitido\n";
			i+=2;
		}
		else
		{
			cout << "Senha Invalida\n";
		}
	}
}
