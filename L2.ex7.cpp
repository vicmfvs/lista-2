#include <iostream>
using namespace std;

int main()
{
	float lado1, lado2, lado3;
	
	cout << "Digite o primeiro lado: ";
	cin >> lado1;
	cout << "Digite o segundo lado: ";
	cin >> lado2;
	cout << "Digite o terceiro lado: ";
	cin >> lado3;
	
	if ((lado1 + lado2 > lado3) &&
	    (lado1 + lado3 > lado2) &&
        (lado2 + lado3 > lado1)) {
		 
		 if (lado1 == lado2 && lado2 == lado3) {
			 cout << "Triangulo Equilatero" << endl;
		 } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
			 cout << "Triangulo Isosceles" << endl;
		 } else {
			 cout << "Triangulo Escaleno" << endl;
		 }
	 } else {
		 cout << "Os valores digitados NAO formam um triangulo." << endl;
		 
	 }
	return 0;
}