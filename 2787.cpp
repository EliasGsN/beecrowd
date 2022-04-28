#include <iostream>


using namespace std;

int main()
{
	int l, c;
	
	cin >> l >> c;
	
	if(l % 2 == 0 and c % 2 == 0)
	{
		cout << "1\n";
	} 
	else if (l%2 == 0 and c % 2 != 0) 
	{
		cout << "0\n";
	}
	else if (l%2 != 0 and c%2 == 0)
	{
		cout << "0\n";
	}
	else
	{
		cout << "1\n";
	}
	
	return 0;
}
