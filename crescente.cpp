#include <iostream>

using namespace std;

int main () {

    int x, y;

    cout << "Digite dois numeros: " << endl;
    cin >> x;
    cin >> y;

    while (x != y) {
        if (x < y) {
            cout << "Crescente!" << endl;
        }
        else {
            cout << "Decrescente!" << endl;
        }

        cout << "Digite outros dois numeros: " << endl;
        cin >> x >> y;
    }

    return 0;
}