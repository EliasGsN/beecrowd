#include <iostream>
using namespace std;

int main()
{
    
    int x, l=1, i, c=1;
    cin >> x;
    
    for(i=1; i <= x*3; i++)
	{
        if (l == 3) 
		{
            cout << c << " PUM\n";
            l=1;
            c++;
            
    	}
        else
		{
    	    cout << c << " ";
    	    l++;
		}
		c++;
    }
}
