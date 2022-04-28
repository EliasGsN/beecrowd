#include <iostream>
using namespace std;

int main()
{
	int v, mv, p, mp;
	mv = 0;
	mp = 0;
	
	for (int i = 1; i <= 100; i++)
	{
		cin >> v;
		if(v > mv)
		{
			mv = v;
			mp = i;
		} 
	}
	cout << mv << endl;
	cout << mp << endl;
}
