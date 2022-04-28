#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double n, x;
	x = 0.0;
	cout << fixed << setprecision(10);
	cin >> n;
	
	while (n--)
	{
		x = x + 6.0;
		x = 1.0 / x;
	}
	
	cout << x + 3.0 << endl;
}
