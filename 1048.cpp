#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float salario;
	cout << fixed << setprecision(2);
	
	cin >> salario;
	
	
	if (salario >= 0 && salario <= 400.00)
	{
		cout << "Novo salario: " << salario * 1.15 << endl;
		cout << "Reajuste ganho: " << (salario * 1.15) - salario << endl;
		cout << "Em percentual: 15 %" << endl; 
	}
	else 
	{
		if (salario >= 400.01 && salario <= 800.00)
		{
			cout << "Novo salario: " << salario * 1.12 << endl;
			cout << "Reajuste ganho: " << (salario * 1.12) - salario << endl;
			cout << "Em percentual: 12 %" << endl; 
		}
		else 
		{
			if (salario >= 800.01 && salario <= 1200.00)
			{	
				cout << "Novo salario: " << salario * 1.10 << endl;
				cout << "Reajuste ganho: " << (salario * 1.10) - salario << endl;
				cout << "Em percentual: 10 %" << endl; 
			}
			else
			{
				if (salario >= 1200.01 && salario <= 2000.00)
				{	
					cout << "Novo salario: " << salario * 1.07 << endl;
					cout << "Reajuste ganho: " << (salario * 1.07) - salario << endl;
					cout << "Em percentual: 7 %" << endl; 
				}
				else
				{
					if (salario > 2000.00)
					{	
						cout << "Novo salario: " << salario * 1.04 << endl;
						cout << "Reajuste ganho: " << (salario * 1.04) - salario << endl;
						cout << "Em percentual: 4 %" << endl; 
					}
				}
			}
		}
	}
	
}
