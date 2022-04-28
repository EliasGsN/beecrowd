#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	
	string name;
	
	double salary, bonus, total;
	
	cout << fixed << setprecision(2);
	
	cin >> name >> salary >> bonus;
	
	total = ( salary + ( 0.15 * bonus));
	
	cout << "TOTAL = R$ " << total << endl;
}
