#include <iostream>
using namespace std;

int main()
{
	int s1, s2, inter=0, gremio=0, empates=0, i=1, c=0;
	
	while(i==1)
	{
		cin >> s1 >> s2;
		if (s1 > s2)
		{
			inter++;
		}
		else
		{
			if(s2 > s1)
			{
				gremio++;
			}
			else
			{
				empates++;
			}
		}
		
		cout << "Novo grenal (1-sim 2-nao)\n";
		cin >> i;
		c++;
	}
	cout << c << " grenais\n";
	cout << "Inter:" << inter << endl;
	cout << "Gremio:" << gremio << endl;
	cout << "Empates:" << empates << endl;
	
	if (inter > gremio)
	{
		cout << "Inter venceu mais\n";
	}
	else
	{
		if(inter < gremio)
		{
			cout << "Gremio venceu mais\n";
		}
		else
		{
			cout << "Nao houve vencedor\n";
		}
	}
}
