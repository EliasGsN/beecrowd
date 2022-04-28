#include <iostream>
using namespace std;

int main ()
{
	string a, b;
	
	cin >> a;
	cin >> b;
	
	if (a <= b)
	{
		cout << "go" << endl;
	}
	else 
	{
		if(a > b)
		{
			cout << "no" << endl;
		}
	}
}
