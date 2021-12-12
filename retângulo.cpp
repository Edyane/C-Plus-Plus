#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main () {

    float base, altura, area, perimetro, diagonal;

    cout << "Base do retangulo: "; 
    cin >> base;
    cout << "Altura do retangulo: "; 
    cin >> altura;
    
    area = base * altura;
    perimetro = 2 * (base + altura);
    diagonal = sqrt (base * base + altura * altura);
    //(pow(base, 2.0) + pow(altura, 2.0) 

    cout << fixed << setprecision(4);
    cout << "AREA = " << area << endl;
    cout << "PERIMENTRO = " << perimetro << endl;
    cout << "DIAGONAL = " << diagonal << endl;

    return 0;
}