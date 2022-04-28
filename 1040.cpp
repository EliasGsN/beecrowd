#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	double n1, n2, n3, n4, ne, MEDIA;
	
	cout << fixed << setprecision (1);
	
	cin >> n1 >> n2 >> n3 >> n4;
	
	n1 = (n1 * 2); 
	// n1 *= 2
	n2 = (n2 * 3);
	
	n3 = (n3 * 4);
	
	n4 = (n4 * 1);
	
	MEDIA = ((n1 + n2 + n3 + n4)/10);  //Média
	// m = ((a*2)+(b*3)+(c*4))/10
	
	if (MEDIA >= 7.0)
	{	
		cout << "Media: " << MEDIA << endl;
		cout << "Aluno aprovado." << endl;
	}
	
	else if (MEDIA <= 4.9)
	{
		cout << "Media: " << MEDIA << endl;
		cout << "Aluno reprovado." << endl;
	}
	else if (MEDIA >= 5.0 && MEDIA <= 6.9)
	{
		cout << "Media: " << MEDIA << endl;
		cout << "Aluno em exame." << endl;
		
		cin >> ne;
		
		cout << "Nota do exame: " << ne << endl;
		
		ne = (ne + MEDIA)/2; //Nota de Exame 
		
		if (ne >= 5.0)
	{
		cout << "Aluno aprovado." << endl;
		cout << "Media final: " << ne << endl;
	}
	else
	{
		cout << "Aluno reprovado." << endl;
		cout << "Media final: " << ne << endl;
	}
	}

}
