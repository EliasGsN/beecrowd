#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int i, j, L;
    float M[12][12], calculo=0;
    char T;
    cout << fixed << setprecision(1);
    
    cin >> L;
    cin >> T;
    
    for (i=0; i < 12; i++)
    {
    	for (j=0; j < 12; j++)
    	{
    		cin >> M[i][j];
		}
	}
	for (j=0; j < 12; j++)
	{
    	calculo += M[L][j];
	}
	
    if (T == 'S')
    { 
        cout << calculo << endl;    
    }
    else
    {
        
        cout << calculo / 12.0 << endl;
    }
}
