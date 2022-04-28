#include <iostream>
using namespace std;

int main()
{
	int pri_botao, seg_botao, soma, x, i;
	cin >> x;
	
	for(i = 0; i < x; i++)
	{
		cin >> pri_botao;
		cin >> seg_botao;
		soma = pri_botao + seg_botao;
		if(soma == 0)
		{
			cout << "PROXYCITY\n";
		} 
		else
		{
			if(soma == 1)
			{
				cout << "P.Y.N.G.\n";
			}
			else
			{
				if(soma == 2)
				{
					cout << "DNSUEY!\n";
				}
				else 
				{
					if(soma == 3)
					{
						cout << "SERVERS\n";
					}
					else 
					{
						if(soma == 4)
						{
							cout << "HOST!\n";
						}
						else
						{
							if(soma == 5)
							{
								cout << "CRIPTONIZE\n";
							}
							else
							{
								if(soma == 6)
								{
									cout << "OFFLINE DAY\n";
								}
								else
								{
									if(soma == 7)
									{
										cout << "SALT\n";
									}
									else
									{
										if(soma == 8)
										{
											cout << "ANSWER!\n";
										}
										else
										{
											if(soma == 9)
											{
												cout << "RAR?\n";
											}
											else
											{
												if(soma == 10)
												{
													cout << "WIFI ANTENNAS\n";
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}
