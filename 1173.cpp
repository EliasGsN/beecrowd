#include <iostream>

using namespace std;

int main()
{
	int v, i, N[10];
	cin >> v;
	N[0]=v;
	
	for(i=1; i<10; i++)
	{
		N[i]= N[i-1]*2;
	}
	for(i=0; i<10; i++)
	{
		cout << "N[" << i << "] = " << N[i] << endl;
	}
	
}
