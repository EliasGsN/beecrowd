#include <iostream>
using namespace std;

int main()
{
	int n, x, in, out;
	cin >> n;
	in = 0;
	out = 0;

	for (int i = 0; i < n; i++)
	{	
		cin >> x;
		if (x >= 10 && x <= 20)
		{
			in++;
		}
		else
		{
			out++;
		}
	}
	
	cout << in << " in" << endl;
	cout << out << " out" << endl;
}
