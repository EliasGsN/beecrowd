#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float n, media=0;
	int i, c=0;
	cout << fixed << setprecision(2);
	
	for(i=0; i < 2; i=c)
	{	
		cin >> n;
		if(n >= 0 && n <= 10.0 )
		{
			media += n;
			c++;
		}
		else 
		{
			cout << "nota invalida\n";
		}
	}
	cout << "media = " << media/2 << endl;
	
}
