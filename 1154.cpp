#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
	int idade, i,n = 0;
	float idade_total = 0;
	cout << fixed << setprecision(2);
	cin >> idade;
	
	for (i = 0; i < idade; i==idade)
	{
		if(idade > 0)
		{
		n++;
		idade_total += idade;
		cin >> idade;
		}
	}				
	cout << idade_total/n << endl;
}
