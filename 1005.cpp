#include <iostream>
#include <iomanip>

using namespace std;

int main () {
	
	double A, B, n1, n2, MEDIA;
	
	cout << fixed << setprecision (5);
	
	cin >> A >> B;
	
	n1 = (A * 3.5);
	
	n2 = (B * 7.5);
	
	MEDIA = ((n1 + n2)/11);
	
	cout << "MEDIA = " << MEDIA << endl;
	
}

