#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	int x;
	
	cin >> x;
	
	cout << x << endl;
	cout << x / 100 << " nota(s) de R$ 100,00" << endl;
	cout << ((x=x % 100) /50) << " nota(s) de R$ 50,00" << endl;
	cout << ((x=x % 50) /20) << " nota(s) de R$ 20,00" << endl;
	cout << ((x=x % 20) /10) << " nota(s) de R$ 10,00" << endl;
	cout << ((x=x % 10) /5) << " nota(s) de R$ 5,00" << endl;
	cout << ((x=x % 5) /2) << " nota(s) de R$ 2,00" << endl;
	cout << ((x=x % 2) /1) << " nota(s) de R$ 1,00" << endl;
}
