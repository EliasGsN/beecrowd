#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	double a;
	int x;
	
	cin >> a;
		
	x = a * 100;
	
	
    cout << "NOTAS:" << endl;
	cout << (x / 10000) << " nota(s) de R$ 100.00" << endl;
	cout << ((x=x % 10000) /5000) << " nota(s) de R$ 50.00" << endl;
	cout << ((x=x % 5000) /2000) << " nota(s) de R$ 20.00" << endl;
	cout << ((x=x % 2000) /1000) << " nota(s) de R$ 10.00" << endl;
	cout << ((x=x % 1000) /500) << " nota(s) de R$ 5.00" << endl;
	cout << ((x=x % 500) /200) << " nota(s) de R$ 2.00" << endl;
	
	cout << "MOEDAS:" << endl;
	cout << ((x=x % 200) /100) << " moeda(s) de R$ 1.00" << endl;
	cout << ((x=x % 100) /50) << " moeda(s) de R$ 0.50" << endl;
	cout << ((x=x % 50) /25) << " moeda(s) de R$ 0.25" << endl;
	cout << ((x=x % 25) /10) << " moeda(s) de R$ 0.10" << endl;
	cout << ((x=x % 10) /5) << " moeda(s) de R$ 0.05" << endl;
	cout << ((x=x % 5) /1) << " moeda(s) de R$ 0.01" << endl;
	
}
