#include <iostream>
using namespace std;

int main()
{
	 double base, altura, area;
	 
	 cout << "Digite o valor da base do retangulo " ;
	 cin >> base;
	 
	 cout << "Digite o valor da altura do retangulo " ;
	 cin >> altura;
	 
	 area = base * altura;
	 
	 cout << "Area do retangulo es: " << area << endl;
	 
	 if (area > 100) {
		 cout << "Terreno grande" << endl;
		 
	 }
	 
	 cout << "Fim do programa" << endl;
	return 0;
}