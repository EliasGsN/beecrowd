#include <iostream>
#include <iomanip>
using namespace std;

int main () 
{
	float area, volume, rad;
	cout << fixed << setprecision(2);

	while ( cin >> volume)
    {   
        cin >> rad;
        area = 3.14 * (rad / 2.0) * (rad / 2.0);
    
        cout << "ALTURA = " << volume/area << endl;
        cout << "AREA = " << area << endl;

    }
}
  
