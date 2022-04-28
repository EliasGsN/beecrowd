#include <iostream>

using namespace std;

int main()
{
    
    int x, y, l;
    cin >> x >> y;
    l = 1;
    
    for (int i = 1; i <= y; i++) 
	{
        if (l == x) 
		{
            cout << i << "\n";
            l=1;
    	}
        else
		{
    	    cout << i << " ";
    	    l++;
   	   }
    }
    
}
