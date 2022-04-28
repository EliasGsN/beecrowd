#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float a, t, media;
	int b = 0;
	cout << fixed << setprecision(1);
	
	for (int i = 0; i < 6; i++)
	{
		cin >> a;
		
		if(a > 0)
		{
			t = t + a;
			b = b + 1;
		}
	}
	
	cout << b << " valores positivos" << endl;
	cout << t/b << endl;
}
