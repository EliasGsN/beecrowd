#include <iostream>

using namespace std;

int main()
{
	int x, par, impar, po, ne;
	po = 0;
	ne = 0;
	par = 0;
	impar = 0;
	
	
	for (int i = 0; i < 5; i++)
	{
		cin >> x;
		
		if(x > 0)
		{
			po = po + 1;
		}
		if(x < 0)
		{
			ne = ne + 1;
		}
		if(x%2 == 0)
		{
			par = par + 1;
		}
		else
		{
			impar = impar + 1;
		}
		
	}
	cout << par << " valor(es) par(es)" << endl;
	cout << impar << " valor(es) impar(es)" << endl;
	cout << po << " valor(es) positivo(s)" << endl;
	cout << ne << " valor(es) negativo(s)" << endl;
	
}
