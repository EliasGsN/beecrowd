#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
	int i;
	float A[100];
	cout << fixed << setprecision(1);
	
	for (i=0; i<100; i++)
	{
		cin >> A[i];
	}
	for (i=0; i<100; i++)
	{
		if(A[i] <= 10)
		{
			cout << "A[" << i <<"] = " << A[i] << endl;
		}
	}
}
