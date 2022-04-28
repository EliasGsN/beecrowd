#include <iostream>
using namespace std;

int main()
{
	int n, pri_n, seg_n, pro_n;
	cin >> n;
	pri_n = 0;
	seg_n = 1;

	
	if (n == 1)
	{ 
		cout << pri_n << endl;
	}
	else
	{
		if (n == 2)
		{
			cout << pri_n <<" "<< seg_n << endl;
		}
		else 
		{
			cout << pri_n <<" "<< seg_n <<" ";
		}
	}

	for (int i = 0; i <= n; i++)
	{			
		
		if (i >= 3)
		{
			pro_n = pri_n + seg_n;
			pri_n = seg_n;
			seg_n = pro_n;
			
			if (i == n)
			{
				cout << pro_n << endl;
			}
			else
			{
				cout << pro_n <<" ";
			}
		}
		
	}
	
	
}
