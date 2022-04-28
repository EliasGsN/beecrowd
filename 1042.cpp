#include <iostream>

using namespace std;

int main() {
	
	int a, b, c;
	
	cin >> a >> b >> c;
	
	if (a < b && b < c)
	{
		cout << a << endl << b << endl << c << "\n\n";
		cout << a << endl << b << endl << c << endl;
	}
	else if (a < c && c < b)
	{
		cout << a << endl << c << endl << b << "\n\n";
		cout << a << endl << b << endl << c << endl;
	}
	else if ( b < a && a < c)
	{
		cout << b << endl << a << endl << c << "\n\n";
		cout << a << endl << b << endl << c << endl;
	}
	else if ( b < c && c < a)
	{
		cout << b << endl << c << endl << a << "\n\n";
		cout << a << endl << b << endl << c << endl;
	}
	else if (c < a && a < b)
	{
		cout << c << endl << a << endl << b << "\n\n";
		cout << a << endl << b << endl << c << endl;
	}
	else 
	{
		cout << c << endl << b << endl << a << "\n\n";
		cout << a << endl << b << endl << c << endl;
	}
}
