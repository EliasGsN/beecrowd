#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    
	int saltos, canos, a_valor, valor, x = 0;
    cin >> saltos >> canos;
    canos--;
    cin >> a_valor;
    
    while (canos--) 
	{
        cin >> valor;
        
        if (fabs(valor - a_valor) > saltos) 
		{
            x++;
            break;
        }
        else
        {
        	a_valor = valor;
		}
    }
    
    if (x == 1)
    {
    	cout << "GAME OVER\n";
	}
    else
    {
    	cout << "YOU WIN\n";
	}
        

}
