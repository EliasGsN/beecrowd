#include <iostream>
#include <cmath>

using namespace std;

int main() {
	
	int A, B, C, LARGER;
	
	cin >> A >> B >> C;
	 
	LARGER = ((A + B +abs(A - B)) /2);
	LARGER = ((LARGER + C + abs(LARGER - C)) /2);
	
	cout << LARGER << " eh o maior" << endl;
	
}
