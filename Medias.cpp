#include <iostream>
using namespace std;
int main() {
    
	int n;
	
	float nota, soma = 0, media;
	cout << "Quantas notas deseja informar? ";
	cin >> n;
	
	if (n <= 0) {
		cout << "Numero de notas." << endl;
		return 0;
	}
	for (int i = 1; i <= n; i++) {
		cout << "Digite a nota " << i << ": ";
		cin >> nota;
		soma += nota;
	}
	media = soma / n;
	
	cout << "A media das " << n << " notas C): " << media << endl;
	
	return 0;
}
