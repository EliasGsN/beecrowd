#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	int A1, A2, B1, B2;
	float C1, C2, total;
	
	cout << fixed << setprecision(2);
	
	cin >> A1 >> B1 >> C1 >> A2 >> B2 >> C2;
	
	total = ((B1 * C1) + (B2 * C2));
	
	cout << "VALOR A PAGAR: R$ " << total << endl;
	
}
