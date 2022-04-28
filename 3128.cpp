#include <iostream>
using namespace std;

int main ()
{
	int i1, i2;
	cin >> i1 >> i2;
	
	if (i1 >= 6 && i2 >= 6)
	{
		if(i1 >= 18 || i2 >= 18)
		{
			cout << "YES\n";
		}
		else 
		{
			if(i1 >=14 && i2 >= 14)
			{
				cout << "YES\n";
			}
			else 
			{
				cout << "NO\n";
			}
		}
	}
	else
	{
		cout << "NO\n";
	}
}
