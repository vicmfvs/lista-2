#include <iostream>
using namespace std;

int main() {
    double valor1, valor2, valor3;
	
	cout << "Digite o primeiro valor: ";
	cin >> valor1;
	
	cout << "Digite o segundo valor: ";
	cin >> valor2;
	
	cout << "Digite o terceiro valor: ";
	cin >> valor3;
	
	if (valor1 == valor2 && valor2 == valor3) {
		cout << "Todos os valores sao iguais: " << valor1 << endl;
	} else {
		double maior = valor1;
		
		if (valor2 > maior) {
			maior = valor2;
		}
		if (valor3 > maior) {
			maior = valor3;
		}
		
		cout << "Maior valor(es): ";
		if (valor1 == maior) {
			cout << valor1 << " ";
		} 
		if (valor2 == maior) {
			cout << valor2 << " ";
		}
		if (valor3 == maior) {
			cout << valor3 << " ";
		}
		cout << endl;
	}
	cout << "Fim do programa" << endl;
	return 0;
}