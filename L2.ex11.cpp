#include <iostream>
#include <iomanip>  
using namespace std;

int main() {
    const float MEDIA_APROVACAO = 5.0f;
    float P1, P2_necessaria;

    
    cout << "Digite a nota da P1 (0 a 10): ";
    cin  >> P1;

    
    P2_necessaria = (MEDIA_APROVACAO * 3.0f - P1) / 2.0f;

    
    cout << fixed << setprecision(2);
    cout << "Voce precisa de ";

    if (P2_necessaria <= 0.0f) {
        
        cout << "no mínimo 0.00 na P2. "
             << "Parabens, você já esta aprovado!\n";
    }
    else if (P2_necessaria > 10.0f) {
        
        cout << P2_necessaria << " na P2, "
             << "mas isso é maior que 10.0 ? impossível de alcançar.\n";
    }
    else {
        
        cout << P2_necessaria << " na P2 "
             << "para fazer media = " << MEDIA_APROVACAO << ".\n";
    }

    return 0;
}