#include <iostream>
#include <iomanip>

using namespace std;

int main () {

    string nome1, nome2;
    int idade1, idade2; 
    float media;

    cout << "Dados da primeira pessoa: " << endl;
    cout << "Nome: ";
    cin >> nome1;
    cout << "Idade: ";
    cin >> idade1;

    cout << "Dados da segunda pessoa: " << endl;
    cout << "Nome: ";
    cin >> nome2;
    cout << "Idade: ";
    cin >> idade2;

    media = (idade1 + idade2) / 2.0;
    //media = (float)(idade1 + idade2) / 2;

    cout << fixed << setprecision(1);

    cout << "A idade media de " << nome1 << " e " << nome2 << " e de " << media << " anos." << endl;

    return 0;
}