#include <iostream>
using namespace std;

int main()
{
	string subfilo, especie, c_alimen;
	cin >> subfilo >> especie >> c_alimen;
	
	if (subfilo == "vertebrado")
	{
		if (especie == "ave")
		{
			if (c_alimen == "carnivoro")
			{
				cout << "aguia" << endl;
			}
			else
			{
				cout << "pomba" << endl;
			}
		}
		else
		{	
			if (c_alimen == "onivoro")
			{
				cout << "homem" << endl;
			}
			else
			{
				cout << "vaca" << endl;
			}
		}
	}
	else 
	{
		if (especie == "inseto")
		{
			if (c_alimen == "hematofago")
			{
				cout << "pulga" << endl;
			}
			else
			{
				cout << "lagarta" << endl; 
			}
		}
		else
		{
			if (c_alimen == "hematofago")
			{
				cout << "sanguessuga" << endl;
			}
			else
			{
				cout << "minhoca" << endl;
			}
		}
	}
}
