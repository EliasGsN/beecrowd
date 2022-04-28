#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    double A, B, C, TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO, p;

    p = 3.14159;

    cout << fixed << setprecision(3);

    cin >> A >> B >> C;

    TRIANGULO = ((A * C) / 2);

    CIRCULO = ( p * (C * C));
    
    TRAPEZIO = (((A + B) * C) / 2);
    
    QUADRADO = (B * B);
    
    RETANGULO = (A * B);

    cout << "TRIANGULO: " << TRIANGULO << endl;

    cout << "CIRCULO: " << CIRCULO << endl;
    
    cout << "TRAPEZIO: " << TRAPEZIO << endl;
    
    cout << "QUADRADO: " << QUADRADO << endl;
    
    cout << "RETANGULO: " << RETANGULO << endl;
}
