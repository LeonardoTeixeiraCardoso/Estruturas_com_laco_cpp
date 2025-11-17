#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Digite um numero: ";
    cin >> numero;

    if (numero >= 10 && numero <= 20)
        cout << numero << " está no intervalo [10,20]." << endl;
    else
        cout << numero << " está fora do intervalo [10,20]." << endl;

    return 0;
}
