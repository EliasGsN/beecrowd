#include <iostream>
using namespace std;

int main ()
{
	int i, j, aux, N[20];
	 
	for (i=0; i<20; i++)
	{
		cin >> N[i];
	}
	for (j=0; j<10; j++)
	{
		i--;
		aux = N[j];
		N[j] = N[i];
		N[i] = aux;	
	}
	for (i=0; i<20; i++)
	{
		cout << "N[" << i << "] = " << N[i] << endl;
	}
}
