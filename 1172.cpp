#include <iostream>

using namespace std;

int main()
{
	int i, x[10];
	
	for(i=0; i<10; i++)
	{
		cin >> x[i];
		if(x[i] < 1)
		{
			x[i] = 1;
		}
	}
	for(i=0; i<10; i++)
	{
		cout << "X[" << i << "] = " << x[i] << endl;
	}
	
}
