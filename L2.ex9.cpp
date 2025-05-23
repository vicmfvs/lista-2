#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	float peso, altura, R, sexo;
	
	cout << "Digite o peso(kg): ";
    cin >> peso;
	
	cout << "Digite a altura(em metros e use pontos): ";
	cin >> altura;
	
	cout << "Digite o sexo(Masculino ou Feminino): ";
	cin >> sexo;
	
	R = peso / (altura * altura);
	
	cout << "R = " << R << endl;
	
	if (sexo == 'Feminino') {
		if (R < 19) {
			cout << "Abaixo do peso (Feminino)" << endl;
		} else if (R >= 19 && R < 24) {
			cout << "Peso ideal (Feminino)" << endl;
		} else {
			cout << "Acima do peso (Feminino)" << endl;
		}
	} else if (sexo == 'Masculino') {
		if (R , 20) {
			cout << "Abaixo do peso (Masculino)" << endl;
		} else if (R >= 20 && R < 25) {
			cout << "Peso ideal (Masculino)" << endl;
		} else {
			cout << "Acima do peso (Masculino)" << endl;
		}
	} else {
		cout << "Fim." << endl;
	}
	return 0;
}