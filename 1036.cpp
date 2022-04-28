#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	
	double Delta, R1, R2, a, b, c;
	
	cout << fixed << setprecision(5);
	
	cin >> a >> b >> c;
	
	Delta = pow(b,2) - 4 * a * c;
	
	R1 = (- b + sqrt(Delta)) / (2 * a);
	R2 = (- b - sqrt(Delta)) / (2 * a);

	if (Delta > 0 && a > 0)
	{
		
		
		cout << "R1 = " << R1 << endl;
		cout << "R2 = " << R2 << endl;
	}
	else
	{
		
		cout << "Impossivel calcular" << endl;
	}
	
}
