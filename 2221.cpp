#include <iostream>
using namespace std;

int main()
{
	int i, t, b, ai1, di1, li1, ai2, di2, li2, vgolpe1, vgolpe2;
	cin >> t;
	for(i=0; i < t; i++)
	{
		cin >> b;
		cin >> ai1 >> di1 >> li1;
		cin >> ai2 >> di2 >> li2;
		
		vgolpe1 = (ai1 + di1)/2;
		vgolpe2 = (ai2 + di2)/2;
		
		if(li1 %2 == 0)
		{
			vgolpe1 += b;
		}
			
		if(li2 %2 == 0)
		{
			vgolpe2 += b;
		}
	
		if(vgolpe1 > vgolpe2)
		{
			cout << "Dabriel\n";
		}
		else
		{
			if(vgolpe1 < vgolpe2)
			{
				cout << "Guarte\n";
			}
			else
			{
				cout << "Empate\n";
			}
		}
	}
}
