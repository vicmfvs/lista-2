#include <iostream>
using namespace std;

int main()
{
	float peso, altura, R;
	
	cout << "Digite o peso (kg): ";
	cin >> peso;
	cout << "Digite a altura(m): ";
	cin >> altura;
	
	R = peso / (altura * altura);
	
	cout << "R = " << R << endl;
	if (R < 20) {
	 cout << "Abaixo do peso" << endl;
	 } else if (R >= 20 && R < 25) {
		 cout << "Peso ideal" << endl;
	 } else {
		 cout << "Acima do peso" << endl;
		 
	 }
	 
	return 0;
}