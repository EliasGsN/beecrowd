#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	int number, hours;
	
	float salary;
	
	cout << fixed << setprecision(2);
	
	cin >> number >> hours >> salary;
	
	salary = (salary * hours);
	
	cout << "NUMBER = " << number << "\n";
	
	cout << "SALARY = U$ " << salary << "\n";
}
