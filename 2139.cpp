#include <iostream>
using namespace std;

int main()
{
	int mes, dia, aux;
	
	while(cin >> mes >> dia)
	{
		if(mes == 1) 
		{//1º mês
			aux = 360 - dia;
		}//1º mês
		else 
		{
			if(mes == 2)
			{//2º mês
				aux = 360 - dia - 31;
			}//2º mês
			else 
			{
				if(mes == 3)
				{//3º mês
					aux = 360 - dia - 60;
				}//3º mês
				else
				{
					if(mes == 4)
					{//4º mês
						aux = 360 - dia - 91;
					}//4º mês
					else
					{
						if(mes == 5)
						{//5º mês
							aux = 360 - dia - 121;
						}//5º mês
						else 
						{
							if(mes == 6)
							{//6º mês
								aux = 360 - dia - 152;
							}//6º mês
							else
							{
								if(mes == 7)
								{//7º mês
									aux = 360 - dia - 182;
								}//7º mês
								else
								{
									if(mes == 8)
									{//8º mês
										aux = 360 - dia - 213;
									}//8º mês
									else
									{
										if(mes == 9)
										{//9º mês
											aux = 360 - dia - 244;
										}//9º mês
										else
										{
											if(mes == 10)
											{//10º mês
												aux = 360 - dia - 274;
											}//10º mês
											else
											{
												if(mes == 11)
												{//11º mês
													aux = 360 - dia - 305;
												}//11º mês
												else
												{
													if(mes == 12)
													{//12º mês
														aux = 360 - dia - 335;
													}//12º mês
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
		if(aux == 0)
		{
			cout << "E natal!\n";
		}
		else
		{
			if(aux == 1)
			{
				cout << "E vespera de natal!\n";
			}
			else
			{
				if(aux > 1)
				{
					cout << "Faltam " << aux << " dias para o natal!\n";
				}
				else 
				{
					if(aux < 0)
					{
						cout << "Ja passou!\n";
					}
				}
			}
		}
	}
	
}
