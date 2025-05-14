#include <iostream>
using namespace std;

int main()
{
  double valor1, valor2;
  
  cout << " Digite o primeiro valor: ";
  cin >> valor1;
  
  cout << "Digite o segundo valor: ";
  cin >> valor2;
  
  if (valor1 > valor2)	{
	  cout << "O maior valor eh: " << valor1 << endl;
  } else if (valor2 > valor1) {
	  cout << "O maior valor eh: " << valor2 << endl;
  } else {
	  cout << "Os dois valores sao identicos!" << endl; 
  }
  
  cout << "Fim do programa" << endl;
	return 0;
}