#include <iostream>
using namespace std;

int main()
{
	int i, t;	
	string sheldon, raj;
	
	cin >> t;
	
	for (i = 1; i <= t; i++)
	{
		cin >> sheldon >> raj;
		if (sheldon == raj)
		{
			cout << "Caso #" << i << ": De novo!\n";
		}
		else 
		{//sen�o 1
			if (sheldon == "tesoura")
			{
				if (raj == "papel" || raj == "lagarto")
				{
					cout << "Caso #" << i << ": Bazinga!\n";
				}
				else
				{
					if (raj == "Spock" || raj == "pedra")
					{
						cout << "Caso #" << i << ": Raj trapaceou!\n";
					}
				}	
			}
			else
			{//sen�o 2
				if (sheldon == "papel")
				{
					if (raj == "pedra" || raj == "Spock")
					{
						cout << "Caso #" << i << ": Bazinga!\n";
					}
					else
					{
						if (raj == "tesoura" || raj == "lagarto")
						{
							cout << "Caso #" << i << ": Raj trapaceou!\n";
						}
					}	
				}
				else
				{//sen�o 3
					if (sheldon == "pedra")
					{
						if (raj == "lagarto" || raj == "tesoura")
						{
							cout << "Caso #" << i << ": Bazinga!\n";
						}
						else
						{
							if (raj == "papel" || raj == "Spock")
							{
								cout << "Caso #" << i << ": Raj trapaceou!\n";
							}
						}	
					}
					else
					{//sen�o 4
						if (sheldon == "lagarto")
						{
							if (raj == "Spock" || raj == "papel")
							{
								cout << "Caso #" << i << ": Bazinga!\n";
							}
							else
							{
								if (raj == "pedra" || raj == "tesoura")
								{
									cout << "Caso #" << i << ": Raj trapaceou!\n";
								}
							}	
						}
						else
						{//sen�o 5 ultimo
							if (sheldon == "Spock")
							{
								if (raj == "tesoura" || raj == "pedra")
								{
									cout << "Caso #" << i << ": Bazinga!\n";
								}
								else
								{
									if (raj == "lagarto" || raj == "papel")
									{
										cout << "Caso #" << i << ": Raj trapaceou!\n";
									}
								}	
							}
						}//sen�o 5 ultimo
					}//sen�o 4
				}//sen�o 3
			}//sen�o 2
		}//sen�o 1
	}//for
}
