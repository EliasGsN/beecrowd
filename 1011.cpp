#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	double p, R, VOLUME;
	
	p = 3.14159;
	
	cout << fixed << setprecision(3);

	cin >> R;
	
	R = (R * R * R);
	
	VOLUME = ((4 / 3.0) * p * R);
	
	cout << "VOLUME = " << VOLUME << endl;
}
