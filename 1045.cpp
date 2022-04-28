#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    float a, b, c, d, a2, b2, c2;
   
    cin >> a >> b >> c;
    
    if(a < b){
		d = a;
		a = b;
		b = d;
	}
	
	    if(a < c) 
	    {
   		    d = a;
   		    a = c; 
   		    c = d;
	    }
	    if(b < c)
	    {
	    	d = b;
    		b = c;
	    	c = d;
	    }
    
    a2 = pow(a,2);
    b2 = pow(b,2);
    c2 = pow(c,2);
	
    if (a >= (b + c))
    {
        cout << "NAO FORMA TRIANGULO" << endl;   
    }
    else{
	
		if (a2 == (b2 + c2))
    	{
        	cout << "TRIANGULO RETANGULO" << endl;
    	}
    	if (a2 > (b2 + c2))
			{
				cout << "TRIANGULO OBTUSANGULO" << endl;
			}
			if (a2 < (b2 + c2))
			{
				cout << "TRIANGULO ACUTANGULO" << endl;
			}
			if (a == b && b == c)
			{
				cout << "TRIANGULO EQUILATERO" << endl;
			}
			if (a == b && b != c || b == c && c != a || a == c && c != b)
			{
				cout << "TRIANGULO ISOSCELES" << endl;
			}
		
	}
}
