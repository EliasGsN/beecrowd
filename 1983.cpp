#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int n, m, i, aluno;
	double nota, maior;
	maior = 0.0;
	cout << fixed << setprecision(1);
	
	cin >> n;
	
	for (i = 0; i < n; i++)
	{
		cin >> m >> nota;
		
		if(nota > maior)
		{
			aluno = m;
			maior = nota;
		}
	}
	
	if (maior >= 8.0)
	{
		cout << aluno << endl;
	}
	else
	{
		cout << "Minimum note not reached\n";
	}
	
}
