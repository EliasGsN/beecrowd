#include <iostream>
using namespace std;

int main()
{
	int qt, n, m, soma=0, i=0;
	string nome1, nome2, d1, d2;
	cin >> qt;
	
	while(i < qt)
	{
		cin >> nome1 >> d1 >> nome2 >> d2;
		cin >> n >> m;
		soma = m + n;
		
		if(d1 == "PAR" && soma%2 == 0 || d1 == "IMPAR" && soma%2 !=0)
		{
			cout << nome1 << endl;
		}
		else
		{
			cout << nome2 << endl;
		}
		i++;
	}
	
}
