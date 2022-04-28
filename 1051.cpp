#include <iostream>
#include <iomanip>

using namespace std;

int main (){
	
	double salario, imp1, imp2, imp3;
	
	cin >> salario;
	
	cout << fixed << setprecision(2);
	if (salario >=0 and salario <= 2000){
		cout << "Isento\n";
	}else if (salario >= 2000.01 and salario <= 3000){
		imp1 = salario - 2000;
		cout << "R$ " << (imp1*8)/100 << endl;
	}else if (salario >= 3000.01 and salario <= 4500){
		imp1 = salario - 2000;
		imp2 = imp1 - 1000;
		cout << "R$ " << (imp2*18)/100 + (1000*8)/100 << endl;
	}else{
		imp1 = salario - 2000;
		imp2 = imp1 - 1000;
		imp3 = imp2 - 1500;
		cout << "R$ " << (imp3*28)/100 + (1500*18)/100 + (1000*8)/100 << endl;
	}
	
	return 0;
}
