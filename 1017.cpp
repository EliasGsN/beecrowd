#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	int hour, km;
	float L;
	
	cout << fixed << setprecision(3);
	
	cin >> hour >> km;
	
	L = ((hour * km) /12.0);
	
	cout << L << endl;
}
