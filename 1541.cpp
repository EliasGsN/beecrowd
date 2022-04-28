#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a, b, c, x=1, i=0, aux;
	
	while(i < x)
	{
		cin >> a;
		if(a == 0)	
		{
			x-=2;
		}
		else
		{
			cin >> b >> c;
			aux = sqrt((a*b*100)/c);
			
			
			cout << aux << endl;
		}
	}
}
