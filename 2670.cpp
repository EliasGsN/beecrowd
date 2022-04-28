#include <iostream>

using namespace std;

int main()
{
	int andar1, andar2, andar3, a, b, c, tempo, tempo1;
	
	cin >> andar1 >> andar2 >> andar3;
	
	a= andar2*2+andar3*4;
	b= andar1*2+andar3*2;
	c= andar1*4+andar2*2; 
	
	tempo = (a+b - abs(a-b))/2;
	tempo1 = (tempo+c - abs(tempo-c))/2;
	
	cout << tempo1 << endl;
	
	return 0;
}
