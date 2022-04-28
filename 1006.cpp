#include <iostream>
#include <iomanip>

using namespace std;

int main () {
	
	double A, B, C, n1, n2, n3, MEDIA;
	
	cout << fixed << setprecision (1);
	
	cin >> A >> B >> C;
	
	n1 = (A * 2);
	
	n2 = (B * 3);
	
	n3 = (C * 5);
	
	MEDIA = ((n1 + n2 + n3)/10);
	
	cout << "MEDIA = " << MEDIA << endl;
	
}
