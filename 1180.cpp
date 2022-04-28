#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int i, x[n], menor, posicao;
	cin >> x[0];
	menor = x[0];
	
	for (i=1; i < n; i++)
	{
		cin >> x[i];
		if (x[i] < menor)
		{
			menor = x[i];
			posicao = i;
		}
	}
	cout << "Menor valor: " << menor << endl;
	cout << "Posicao: " << posicao << endl;
}
