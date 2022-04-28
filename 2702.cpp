#include <iostream>

using namespace std;

int main ()
{
	int c, b, p, ca, ba, pa, cr, br, pr, t;
	
	cin >> ca >> ba >> pa;
	
	cin >> cr >> br >> pr;
	
	if (ca >= cr && ba >= br && pa >= pr)
	{
		t = 0;
	}
	else
	{
		
		if (ca < cr)
		{
			c = (ca - cr);
		}
		if (ca >= cr)
		{
			c = 0;
		}
		if (ba < br)
		{
			b = (ba - br);
		}
		if (ba >= br)
		{
			b = 0;
		}
		if (pa < pr)
		{
			p = (pa - pr);
			t = (p + b + c) * (-1);	
		}
		if (pa >= pr)
		{
			p = 0;
			
			t = (p + b + c) * (-1);
		}
	}
	cout << t << endl;
	
	return (0);
}

