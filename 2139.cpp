#include <iostream>
using namespace std;

int main()
{
	int mes, dia, aux;
	
	while(cin >> mes >> dia)
	{
		if(mes == 1) 
		{//1� m�s
			aux = 360 - dia;
		}//1� m�s
		else 
		{
			if(mes == 2)
			{//2� m�s
				aux = 360 - dia - 31;
			}//2� m�s
			else 
			{
				if(mes == 3)
				{//3� m�s
					aux = 360 - dia - 60;
				}//3� m�s
				else
				{
					if(mes == 4)
					{//4� m�s
						aux = 360 - dia - 91;
					}//4� m�s
					else
					{
						if(mes == 5)
						{//5� m�s
							aux = 360 - dia - 121;
						}//5� m�s
						else 
						{
							if(mes == 6)
							{//6� m�s
								aux = 360 - dia - 152;
							}//6� m�s
							else
							{
								if(mes == 7)
								{//7� m�s
									aux = 360 - dia - 182;
								}//7� m�s
								else
								{
									if(mes == 8)
									{//8� m�s
										aux = 360 - dia - 213;
									}//8� m�s
									else
									{
										if(mes == 9)
										{//9� m�s
											aux = 360 - dia - 244;
										}//9� m�s
										else
										{
											if(mes == 10)
											{//10� m�s
												aux = 360 - dia - 274;
											}//10� m�s
											else
											{
												if(mes == 11)
												{//11� m�s
													aux = 360 - dia - 305;
												}//11� m�s
												else
												{
													if(mes == 12)
													{//12� m�s
														aux = 360 - dia - 335;
													}//12� m�s
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
