#include <iostream>
using namespace std;

int main()
{
	float P1, P2, media;
	
	cout << "Digite a nota da P1: ";
	cin >> P1;
	
	cout << "Digite a nota da P2: ";
	cin >> P2;
	
	media = (P1 + P2) / 2;
	
	cout << "Media = " << media << endl;
	
	if (media >= 5.0) {
		cout << "Aluno Aprovado!" << endl;
	} else {
		cout << "Aluno Reprovado!" << endl;
	}
	
	return 0;
}