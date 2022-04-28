#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float s;
	cout << fixed << setprecision(2);
	s = 1;
	
	for (float i = 2; i <= 100; i++)
	{
		s+=1/i;
	}
	cout << s << endl;
}
