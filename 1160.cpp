#include <iostream>
using namespace std;

int main()
{
	int t, pa, pb, anos, i;
	double g1, g2;
	
	cin >> t;
	for (i = 0; i < t; i++)
	{
		cin >> pa >> pb >> g1 >> g2;
		anos = 0;
		do
		{
			pa *= (1 +(g1/100));
			pb *= (1 +(g2/100));
			anos++;
			if (anos > 100) break;
		}
		while(pa <= pb);
		
		if (anos > 100)
		{
			cout << "Mais de 1 seculo.\n";
		}
		else
		{
			cout << anos << " anos.\n";
		}
	}
}
