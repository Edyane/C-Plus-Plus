#include <iostream>

using namespace std;

int main () {

int x, y, soma, troca;

cout << "Digite dois numeros: " << endl;
cin >> x;
cin >> y;


if (x > y) {
    troca = x;
    x = y; 
    y = troca;
}

 soma = 0;
    for (int i = x + 1; i < y; i++) {
        if (i % 2 != 0) {
            soma = soma + i;
        }
    }

    printf("Soma dos Impares = %d\n", soma);

    return 0;
}