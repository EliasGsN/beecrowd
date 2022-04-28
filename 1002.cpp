#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
	double n, R;
	n = 3.14159;
	cin >> R; 
	cout << fixed << setprecision(4);
	R = (R * R);
	cout << "A=" << n * R <<endl;
	
}
