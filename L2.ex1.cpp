#include <iostream>
using namespace std;

int main() {
    int valor1, valor2;
    
    cout << "Digite o primeiro valor: " ;
    cin >> valor1;
    
    cout << "Dgite o segundo valor: ";
    cin >> valor2;
    
    if (valor1 == valor2) {
		cout << "Os valores devem ser distintos!" << endl;
	} else {
	  
       if (valor1 > valor2) {
		   cout << "O maior valor eh: " << valor1 << endl;
	   } else {
		   cout << "O maior valor eh:" << valor2 << endl;
		   
	   }
	}
	
	return 0;
	
}