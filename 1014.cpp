#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	int x;
	float y, T;
	
	cout << fixed << setprecision(3);
	
	cin >> x >> y;
	
	T = (x / y);
	
	cout << T << " km/l" << endl;
	
}
