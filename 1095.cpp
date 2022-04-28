#include <iostream>
using namespace std;

int main()
{
	int j = 65;
    
	for (int i = 1; i <= 37; i+=3)
	{
		cout << "I=" << i << " " << "J=" << j-5 << "\n";
        j-=5;
    }
    
}
