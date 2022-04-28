#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
	
	float x1, x2, y1, y2, p1, p2, D;
	
	cout << fixed << setprecision(4);
	
	cin >> x1 >> y1;
	cin >> x2 >> y2;
	
	p1 = (x2 - x1);
	p1 = pow(p1,2);
	p2 = (y2 - y1);
	p2 = pow(p2,2);
	
	D = sqrt(p1 + p2);
	
	cout << D << endl;
}
