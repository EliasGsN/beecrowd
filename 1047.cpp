#include <iostream>

using namespace std;

int main (){
	
	int hi, mi, hf, mf, ht, mt;
	
	cin >> hi; cin >> mi; cin >> hf; cin >> mf;
	
	if (hi > hf and mi > mf){
		hf = abs(abs(hi-hf)-24);
		hf -= 1;
		mf = abs(abs(mi-mf)-60);
		cout << "O JOGO DUROU " << hf << " HORA(S) E " << mf << " MINUTO(S)\n";
	}else if (hi > hf and mi < mf){
		hf = abs(abs(hi-hf)-24);
		mf = abs(mf-mi);
		cout << "O JOGO DUROU " << hf << " HORA(S) E " << mf << " MINUTO(S)\n";
	}else if (hi < hf and mi > mf){
		hf = hf-hi;
		hf -= 1;
		mf = abs(abs(mi-mf)-60);
		cout << "O JOGO DUROU " << hf << " HORA(S) E " << mf << " MINUTO(S)\n";
	}else if (hi < hf and mi < mf){
		hf = hf-hi;
		mf = abs(mf-mi);
		cout << "O JOGO DUROU " << hf << " HORA(S) E " << mf << " MINUTO(S)\n";
	}else if (hi == hf and mi > mf){
		hf = 23;
		mf = abs(abs(mi-mf)-60);
		cout << "O JOGO DUROU " << hf << " HORA(S) E " << mf << " MINUTO(S)\n";
	}else if (hi == hf and mi < mf){
		hf = 0;
		mf = abs(mf-mi);	
		cout << "O JOGO DUROU " << hf << " HORA(S) E " << mf << " MINUTO(S)\n";
	}else if (hi == hf and mi == mf){
		cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n";
	}
	
	return 0;
}
